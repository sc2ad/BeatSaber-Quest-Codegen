#pragma once
#include "System/zzzz__ConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
//  Writing Method size for method: System::ConsoleDriver.CreateNullConsoleDriver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IConsoleDriver (*)()>(&System::ConsoleDriver::CreateNullConsoleDriver)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2489320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "CreateNullConsoleDriver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleDriver.CreateWindowsConsoleDriver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IConsoleDriver (*)()>(&System::ConsoleDriver::CreateWindowsConsoleDriver)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x248936c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "CreateWindowsConsoleDriver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleDriver.CreateTermInfoDriver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IConsoleDriver (*)(::StringW)>(&System::ConsoleDriver::CreateTermInfoDriver)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24893c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "CreateTermInfoDriver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleDriver.ReadKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ConsoleKeyInfo (*)(bool)>(&System::ConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2488ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleDriver.get_IsConsole
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::ConsoleDriver::get_IsConsole)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2488534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "get_IsConsole",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleDriver.Isatty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t)>(&System::ConsoleDriver::Isatty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2489774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "Isatty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleDriver.InternalKeyAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::ConsoleDriver::InternalKeyAvailable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2489778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "InternalKeyAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleDriver.TtySetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<::ArrayW<uint8_t>>, ByRef<void*>)>(&System::ConsoleDriver::TtySetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248977c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "TtySetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleDriver.SetEcho
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&System::ConsoleDriver::SetEcho)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2489780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "SetEcho",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::ConsoleDriver::__set_driver(System::IConsoleDriver value)  {
::cordl_internals::setStaticField<System::IConsoleDriver, "driver", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get>(std::forward<System::IConsoleDriver>(value));
}
 System::IConsoleDriver System::ConsoleDriver::__get_driver()  {
return ::cordl_internals::getStaticField<System::IConsoleDriver, "driver", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get>();
}
 void System::ConsoleDriver::__set_is_console(bool value)  {
::cordl_internals::setStaticField<bool, "is_console", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get>(std::forward<bool>(value));
}
 bool System::ConsoleDriver::__get_is_console()  {
return ::cordl_internals::getStaticField<bool, "is_console", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get>();
}
 void System::ConsoleDriver::__set_called_isatty(bool value)  {
::cordl_internals::setStaticField<bool, "called_isatty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get>(std::forward<bool>(value));
}
 bool System::ConsoleDriver::__get_called_isatty()  {
return ::cordl_internals::getStaticField<bool, "called_isatty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get>();
}
 System::IConsoleDriver System::ConsoleDriver::CreateNullConsoleDriver()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "CreateNullConsoleDriver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IConsoleDriver, false>(nullptr, ___internal_method);
}
 System::IConsoleDriver System::ConsoleDriver::CreateWindowsConsoleDriver()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "CreateWindowsConsoleDriver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IConsoleDriver, false>(nullptr, ___internal_method);
}
 System::IConsoleDriver System::ConsoleDriver::CreateTermInfoDriver(::StringW term)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "CreateTermInfoDriver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IConsoleDriver, false>(nullptr, ___internal_method, term);
}
 System::ConsoleKeyInfo System::ConsoleDriver::ReadKey(bool intercept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "ReadKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ConsoleKeyInfo, false>(nullptr, ___internal_method, intercept);
}
 bool System::ConsoleDriver::get_IsConsole()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "get_IsConsole",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::ConsoleDriver::Isatty(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "Isatty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
 int32_t System::ConsoleDriver::InternalKeyAvailable(int32_t ms_timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "InternalKeyAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ms_timeout);
}
 bool System::ConsoleDriver::TtySetup(::StringW keypadXmit, ::StringW teardown, ByRef<::ArrayW<uint8_t>> control_characters, ByRef<void*> address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "TtySetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keypadXmit, teardown, control_characters, address);
}
 bool System::ConsoleDriver::SetEcho(bool wantEcho)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleDriver>::get(),
                            "SetEcho",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, wantEcho);
}
