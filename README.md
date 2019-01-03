![](docs/images/FISCO_BCOS_Logo.svg)

**FISCO BCOS** is an open-sourced, cross-industry, collaborative, and secure blockchain platform. Two major camps of blockchain technology - public and consortium chains, to better serve the general public, open consortium chain is the perfect choice for enterprises to unlock the potential of collaborative businesses model. FISCO BCOS is born to support open consortium chain applications, by supporting multiple chains, and cross-chain communication.

[![Build Status](https://travis-ci.org/FISCO-BCOS/FISCO-BCOS.svg)](https://travis-ci.org/FISCO-BCOS/FISCO-BCOS)  [![codecov](https://codecov.io/gh/FISCO-BCOS/FISCO-BCOS/branch/master/graph/badge.svg)](https://codecov.io/gh/FISCO-BCOS/FISCO-BCOS) [![CodeFactor](https://www.codefactor.io/repository/github/fisco-bcos/FISCO-BCOS/badge)](https://www.codefactor.io/repository/github/fisco-bcos/FISCO-BCOS) [![Codacy Badge](https://api.codacy.com/project/badge/Grade/08552871ee104fe299b00bc79f8a12b9)](https://www.codacy.com/app/fisco-dev/FISCO-BCOS?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=FISCO-BCOS/FISCO-BCOS&amp;utm_campaign=Badge_Grade) [![](https://img.shields.io/github/issues-pr/FISCO-BCOS/FISCO-BCOS.svg)](https://github.com/FISCO-BCOS/FISCO-BCOS/pulls) [![GitHub issues](https://img.shields.io/github/issues/FISCO-BCOS/FISCO-BCOS.svg)](https://github.com/FISCO-BCOS/FISCO-BCOS/issues) [![GitHub All Releases](https://img.shields.io/github/downloads/FISCO-BCOS/FISCO-BCOS/total.svg)](https://github.com/FISCO-BCOS/FISCO-BCOS) 

## Quick Start

### Build a blockchain

Run [`build_chain.sh`](tools/build_chain.sh) to generate a blockchain with some nodes. For example, we build a blockchain with 4 nodes belongs to `127.0.0.1`.

```bash
curl -LO https://raw.githubusercontent.com/FISCO-BCOS/FISCO-BCOS/dev/tools/build_chain.sh
bash build_chain.sh -l "127.0.0.1:4"
```

After that, we start up all nodes. And the blockchain is running!

```bash
cd ./nodes
bash start_all.sh
```

More senarios, read XXX.


## Developing & Contributing

* Star our Github. 
* Pull requests. See [CONTRIBUTING](CONTRIBUTING.md) and [CODING_STYLE](CODING_STYLE.md).
* [Ask questions](https://github.com/FISCO-BCOS/FISCO-BCOS/issues) and [submit bugs](https://github.com/FISCO-BCOS/FISCO-BCOS/issues).
* Discuss in [WeChat group](docs/images/WeChatQR.jpeg) or [Gitter](https://gitter.im/fisco-bcos/Lobby).

## Further Reading

See the [FISCO BCOS Doc](https://fisco-bcos-documentation-en.readthedocs.io/en/latest/).

### Features

* **Security**: Comprehensive security coverage includes white list, CA certificate, key management
* **Privacy**: Access role control, zero-knowledge proof, homomorphic encryption, group signature, ring signature
* **Performance**: Parallel computation, efficient consensus mechanism
* **Usability**: Easy to get started with SDK, sample implementation, deployment guide, monitoring and auditing tools
* **Reliability**: Several applications in production with proven stability


### Featured Cases

Since launched, dozens of use cases have been implemented based on the FISCO BCOS. See [FEATURED CASES](http://www.fisco-bcos.org/assets/docs/FISCO%20BCOS%20-%20Featured%20Cases.pdf).

## Community

Financial Blockchain Shenzhen Consortium (FISCO) has attracted more than 100 members including financial institutions and financial information service companies so far. The first members include the following organizations: Beyondsoft, Huawei, Shenzheng, Shenzhou Digital, Forms Syntron, Tencent, WeBank, Yuexiu Jinke.

- Join our WeChat [![Scan](https://img.shields.io/badge/style-Scan_QR_Code-green.svg?logo=wechat&longCache=false&style=social&label=Group)](docs/images/WeChatQR.jpeg) 


- Discuss in [![Gitter](https://img.shields.io/badge/style-on_gitter-green.svg?logo=gitter&longCache=false&style=social&label=Chat)](https://gitter.im/fisco-bcos/Lobby) 


- Read news by [![](https://img.shields.io/twitter/url/http/shields.io.svg?style=social&label=Follow@FiscoBcos)](https://twitter.com/FiscoBcos)


- Mail us at [![](https://img.shields.io/twitter/url/http/shields.io.svg?logo=Gmail&style=social&label=service@fisco.com.cn)](mailto:service@fisco.com.cn)


## License

[![](https://img.shields.io/github/license/FISCO-BCOS/FISCO-BCOS.svg)](LICENSE)

All contributions are made under the [GNU General Public License v3](https://www.gnu.org/licenses/gpl-3.0.en.html). See [LICENSE](LICENSE).
