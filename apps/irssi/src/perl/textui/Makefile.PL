use ExtUtils::MakeMaker;

WriteMakefile('NAME' => 'Irssi::TextUI',
              'LIBS' => '',
	      'OBJECT' => '$(O_FILES)',
              'TYPEMAPS' => ['../common/typemap', '../ui/typemap'],
              'INC' => '-I../../.. -I../../../src -I../../../src/core -I../../../src/fe-common/core -I../../../src/fe-text -pthread -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include ',
	      'VERSION_FROM' => './TextUI.pm');
