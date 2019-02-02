# -*- coding: utf-8 -*-

import os
from invoke import task

root = os.path.dirname(os.path.abspath(__file__))
name = 'my_code'


@task
def clean(ctx):
    ctx.run('rm -rf build dist', echo=True)
    ctx.run("find . -name '*.pyc' -exec rm -f {} +", echo=True)
    ctx.run("find . -name '*.pyo' -exec rm -f {} +", echo=True)
    ctx.run("find . -name '__pycache__' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name 'htmlcov' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '.coverage*' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '.pytest_cache' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '*.o' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '*.exe' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '*.dsp' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '*.dsw' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '*.ncb' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '*.opt' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '*.plg' -exec rm -rf {} +", echo=True)
    ctx.run("find . -name '*.cpp' -exec rm -rf {} +", echo=True)
@task(clean)
def check(ctx, j=4):
    ctx.run(
        "pylint -j {} --output-format colorized  web_service".format(j)
    )

@task
def lock(ctx):
    ctx.run(
        "pipenv lock -v --keep-outdated", echo=True
    )

@task(clean)
def unittest(ctx):
    """运行单元测试和计算测试覆盖率"""
    ctx.run("export PYTHONPATH=`pwd` && pytest --cov=web_service tests", echo=True)

@task(clean)
def push(ctx):
    ctx.run("git push", echo=True)
