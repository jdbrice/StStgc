

build with:
source /star/data03/pwg/jdb//FWD/starverFWD
cons

(starver dev should also work)

you can run the StROOT code with the command:
./run_test.sh

if you look in that script, it just runs the BFC with two options.
the command is just one line:
root4star -b -q -l 'bfc.C( 100000, "...", "./in/stgc_s01_phy01105941_dbg.daq" )'

the first arg is number of events
second is the chain options (dont change these)
third is the input DAQ file (DAQ and sfs are the same, but you have to change the filename to use .daq or the chain wont read it)

When you run it, it will produce a file with the ending of .stgcQA.root
This file has your QA histograms defined in the StStgcQAMaker



Running Tonko's RTS EXAMPLE

cd RTS/src/RTS_EXAMPLE/

(should already be built)
run with 
./rts_example <path_to_sfs_or_daq_file>



some sfs/daq files are in the "in" folder
