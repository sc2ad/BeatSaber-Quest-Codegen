#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Console_def.hpp"
#include "System/zzzz__Console_def.hpp"
#include "System/zzzz__ConsoleCancelEventHandler_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
//  Writing Method size for method: GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2489184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler::*)(int32_t)>(&GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2489248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler>(object, method))};
return o;
}
 void GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler::Invoke(int32_t keyCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, keyCode);
}
//  Writing Method size for method: System::System__Console__WindowsConsole.GetConsoleCP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::System__Console__WindowsConsole::GetConsoleCP)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2488fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "GetConsoleCP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Console__WindowsConsole.GetConsoleOutputCP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::System__Console__WindowsConsole::GetConsoleOutputCP)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x248901c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "GetConsoleOutputCP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Console__WindowsConsole.DoWindowsConsoleCancelEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&System::System__Console__WindowsConsole::DoWindowsConsoleCancelEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2489088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "DoWindowsConsoleCancelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Console__WindowsConsole.GetInputCodePage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::System__Console__WindowsConsole::GetInputCodePage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24880ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "GetInputCodePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__Console__WindowsConsole.GetOutputCodePage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::System__Console__WindowsConsole::GetOutputCodePage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2488138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "GetOutputCodePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::System__Console__WindowsConsole::__set_ctrlHandlerAdded(bool value)  {
::cordl_internals::setStaticField<bool, "ctrlHandlerAdded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get>(std::forward<bool>(value));
}
 bool System::System__Console__WindowsConsole::__get_ctrlHandlerAdded()  {
return ::cordl_internals::getStaticField<bool, "ctrlHandlerAdded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get>();
}
 void System::System__Console__WindowsConsole::__set_cancelHandler(GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler value)  {
::cordl_internals::setStaticField<GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler, "cancelHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get>(std::forward<GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler>(value));
}
 GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler System::System__Console__WindowsConsole::__get_cancelHandler()  {
return ::cordl_internals::getStaticField<GlobalNamespace::System__Console__WindowsConsole__WindowsCancelHandler, "cancelHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get>();
}
 int32_t System::System__Console__WindowsConsole::GetConsoleCP()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "GetConsoleCP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t System::System__Console__WindowsConsole::GetConsoleOutputCP()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "GetConsoleOutputCP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool System::System__Console__WindowsConsole::DoWindowsConsoleCancelEvent(int32_t keyCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "DoWindowsConsoleCancelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keyCode);
}
 int32_t System::System__Console__WindowsConsole::GetInputCodePage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "GetInputCodePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t System::System__Console__WindowsConsole::GetOutputCodePage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Console__WindowsConsole>::get(),
                            "GetOutputCodePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: System::Console.SetupStreams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::Encoding, System::Text::Encoding)>(&System::Console::SetupStreams)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x2488184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "SetupStreams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.get_Error
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::TextWriter (*)()>(&System::Console::get_Error)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x248881c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.get_Out
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::TextWriter (*)()>(&System::Console::get_Out)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2488874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "get_Out",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(::cordl_internals::intptr_t, System::IO::FileAccess, int32_t)>(&System::Console::Open)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x24888cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.OpenStandardError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(int32_t)>(&System::Console::OpenStandardError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x248878c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "OpenStandardError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.OpenStandardInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(int32_t)>(&System::Console::OpenStandardInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x248866c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "OpenStandardInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.OpenStandardOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(int32_t)>(&System::Console::OpenStandardOutput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24886fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "OpenStandardOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.SetOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::TextWriter)>(&System::Console::SetOut)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2488a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "SetOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.WriteLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Console::WriteLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2488b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "WriteLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.get_InputEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Console::get_InputEncoding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2488b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "get_InputEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.get_OutputEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Console::get_OutputEncoding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2488bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "get_OutputEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.ReadKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ConsoleKeyInfo (*)()>(&System::Console::ReadKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2488c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.ReadKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ConsoleKeyInfo (*)(bool)>(&System::Console::ReadKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2488c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Console.DoConsoleCancelEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Console::DoConsoleCancelEvent)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2488dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "DoConsoleCancelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Console::__set_stdout(System::IO::TextWriter value)  {
::cordl_internals::setStaticField<System::IO::TextWriter, "stdout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>(std::forward<System::IO::TextWriter>(value));
}
 System::IO::TextWriter System::Console::__get_stdout()  {
return ::cordl_internals::getStaticField<System::IO::TextWriter, "stdout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>();
}
 void System::Console::__set_stderr(System::IO::TextWriter value)  {
::cordl_internals::setStaticField<System::IO::TextWriter, "stderr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>(std::forward<System::IO::TextWriter>(value));
}
 System::IO::TextWriter System::Console::__get_stderr()  {
return ::cordl_internals::getStaticField<System::IO::TextWriter, "stderr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>();
}
 void System::Console::__set_stdin(System::IO::TextReader value)  {
::cordl_internals::setStaticField<System::IO::TextReader, "stdin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>(std::forward<System::IO::TextReader>(value));
}
 System::IO::TextReader System::Console::__get_stdin()  {
return ::cordl_internals::getStaticField<System::IO::TextReader, "stdin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>();
}
 void System::Console::__set_inputEncoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "inputEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Console::__get_inputEncoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "inputEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>();
}
 void System::Console::__set_outputEncoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "outputEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Console::__get_outputEncoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "outputEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>();
}
 void System::Console::__set_cancel_event(System::ConsoleCancelEventHandler value)  {
::cordl_internals::setStaticField<System::ConsoleCancelEventHandler, "cancel_event", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>(std::forward<System::ConsoleCancelEventHandler>(value));
}
 System::ConsoleCancelEventHandler System::Console::__get_cancel_event()  {
return ::cordl_internals::getStaticField<System::ConsoleCancelEventHandler, "cancel_event", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get>();
}
 void System::Console::SetupStreams(System::Text::Encoding inputEncoding, System::Text::Encoding outputEncoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "SetupStreams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputEncoding, outputEncoding);
}
 System::IO::TextWriter System::Console::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::TextWriter, false>(nullptr, ___internal_method);
}
 System::IO::TextWriter System::Console::get_Out()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "get_Out",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::TextWriter, false>(nullptr, ___internal_method);
}
 System::IO::Stream System::Console::Open(::cordl_internals::intptr_t handle, System::IO::FileAccess access, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, handle, access, bufferSize);
}
 System::IO::Stream System::Console::OpenStandardError(int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "OpenStandardError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, bufferSize);
}
 System::IO::Stream System::Console::OpenStandardInput(int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "OpenStandardInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, bufferSize);
}
 System::IO::Stream System::Console::OpenStandardOutput(int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "OpenStandardOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, bufferSize);
}
 void System::Console::SetOut(System::IO::TextWriter newOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "SetOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newOut);
}
 void System::Console::WriteLine(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "WriteLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 System::Text::Encoding System::Console::get_InputEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "get_InputEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 System::Text::Encoding System::Console::get_OutputEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "get_OutputEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 System::ConsoleKeyInfo System::Console::ReadKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ConsoleKeyInfo, false>(nullptr, ___internal_method);
}
 System::ConsoleKeyInfo System::Console::ReadKey(bool intercept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ConsoleKeyInfo, false>(nullptr, ___internal_method, intercept);
}
 void System::Console::DoConsoleCancelEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Console>::get(),
                            "DoConsoleCancelEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
