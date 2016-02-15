/*
 * Copyright (c) 2016 Devoleda Organisation. All rights reserved.
 * Copyright (c) Yuval <yuval@tutanota.com>
 *
 * @DEVOLEDA_OSES_BSD_LICENCE_START@
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY DEVOLEDA ORGANISATION ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * @DEVOLEDA_OSES_BSD_LICENCE_END@
 *
 */
void help()
{
 printf("TonicOS Hexcell Package Builder version %s\n\n", MKCELL_VERSION);
 printf("Options:\n");
 printf("\t-h --help\t\t-Print this message and exit\n");
 printf("\t-f --force\t\t-Ignore all errors and overwrite target\n");
 printf("\t-q --quiet\t\t-Don't output anything while running\n");
 printf("\t --version\t\t-Print version information and exit\n");
 printf("\nBuild Options:\n");
 printf("\t-n --cellname\t\t-Specify the name of cell package\n");
 printf("\t-S --cellshortname\t-Specify the shortname of cell package\n");
 printf("\t-v --cellver\t\t-Specify the version of cell package\n");
 printf("\t-V --cellverstr\t\t-Specify the alternative version string of cell package\n");
 printf("\t-d --celldesc\t\t-Specify the description of cell package\n");
 printf("\t-u --cellurl\t\t-Specify the url information of provider\n");
 printf("\t-p --cellpackager\t-Specify the packager of cell package\n");
 printf("\t-a --cellarch\t\t-Specify the architecture of cell package\n");
 printf("\t-P --cellprovide\t-Specify what package provide(include)\n");
 printf("\t-c --cellconflict\t-Specify the name(s) of package conflict with\n");
 printf("\t-D --celldep\t\t-Specify the name(s) of package required\n");
 printf("\t-s --scriptlet\t\t-Specify the scriptlet of cell package\n");
 printf("\t-l --licence \t\t-Specify the licence of cell package\n");
 printf("\t-o --outputdir\t\t-Specify where to place cell package\n"
"\t \t(current directory as default)\n");
 // printf("\t-w --workdir\t\t-Specify which cell source directory to use\n");
 printf("\t-r --rootdir\t\t-Specify the root data directory of cell\n");
 printf("\nSignture Options:\n");
 printf("\t --private-key\t-Specify the public key\n"
 "\t --public-key \t-Specify the private key used to sign the cell\n");
 printf("\t --passphrase \t-Specify the passphrase of private key(if have)\n");
}

void main(int argc, char *argv[])
{
 
}


