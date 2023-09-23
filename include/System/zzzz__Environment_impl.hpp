#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__Environment_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/zzzz__PlatformID_def.hpp"
#include "System/zzzz__OperatingSystem_def.hpp"
#include "System/zzzz__EnvironmentVariableTarget_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Exception_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__Environment__SpecialFolder::System__Environment__SpecialFolder(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__Environment__SpecialFolder::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__Environment__SpecialFolder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::MyDocuments{5};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Desktop{0};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::MyComputer{17};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Programs{2};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Personal{5};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Favorites{6};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Startup{7};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Recent{8};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::SendTo{9};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::StartMenu{11};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::MyMusic{13};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::DesktopDirectory{16};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Templates{21};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::ApplicationData{26};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::LocalApplicationData{28};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::InternetCache{32};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Cookies{33};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::History{34};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonApplicationData{35};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::System{37};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::ProgramFiles{38};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::MyPictures{39};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonProgramFiles{43};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::MyVideos{14};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::NetworkShortcuts{19};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Fonts{20};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonStartMenu{22};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonPrograms{23};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonStartup{24};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonDesktopDirectory{25};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::PrinterShortcuts{27};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Windows{36};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::UserProfile{40};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::SystemX86{41};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::ProgramFilesX86{42};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonProgramFilesX86{44};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonTemplates{45};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonDocuments{46};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonAdminTools{47};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::AdminTools{48};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonMusic{53};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonPictures{54};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonVideos{55};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::Resources{56};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::LocalizedResources{57};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CommonOemLinks{58};
constexpr System::System__Environment__SpecialFolder  System::System__Environment__SpecialFolder::CDBurning{59};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__Environment__SpecialFolderOption::System__Environment__SpecialFolderOption(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__Environment__SpecialFolderOption::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__Environment__SpecialFolderOption::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__Environment__SpecialFolderOption  System::System__Environment__SpecialFolderOption::None{0};
constexpr System::System__Environment__SpecialFolderOption  System::System__Environment__SpecialFolderOption::DoNotVerify{16384};
constexpr System::System__Environment__SpecialFolderOption  System::System__Environment__SpecialFolderOption::Create{32768};
//  Writing Method size for method: System::Environment.GetResourceString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Environment::GetResourceString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24834bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetResourceString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetResourceString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::Environment::GetResourceString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2485330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetResourceString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetResourceStringEncodingName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&System::Environment::GetResourceStringEncodingName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2486abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetResourceStringEncodingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_CurrentDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_CurrentDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2486c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_CurrentDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_CurrentManagedThreadId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Environment::get_CurrentManagedThreadId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2486c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_CurrentManagedThreadId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_HasShutdownStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::get_HasShutdownStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2486c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_HasShutdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_MachineName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_MachineName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2486c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_MachineName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetNewLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::GetNewLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2486c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_NewLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_NewLine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2486c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_NewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_Platform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::PlatformID (*)()>(&System::Environment::get_Platform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2486cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_Platform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetOSVersionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::GetOSVersionString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2486cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetOSVersionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_OSVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::OperatingSystem (*)()>(&System::Environment::get_OSVersion)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2486cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_OSVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.CreateVersionFromString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Version (*)(::StringW)>(&System::Environment::CreateVersionFromString)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2486d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "CreateVersionFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_StackTrace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_StackTrace)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2486fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_StackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_TickCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Environment::get_TickCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_TickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_UserDomainName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_UserDomainName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_UserDomainName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_UserName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_UserName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_UserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.Exit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&System::Environment::Exit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248702c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "Exit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetCommandLineArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&System::Environment::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.internalGetEnvironmentVariable_native
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::cordl_internals::intptr_t)>(&System::Environment::internalGetEnvironmentVariable_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "internalGetEnvironmentVariable_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.internalGetEnvironmentVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Environment::internalGetEnvironmentVariable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2487038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "internalGetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetEnvironmentVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Environment::GetEnvironmentVariable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetEnvironmentVariables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (*)()>(&System::Environment::GetEnvironmentVariables)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2487104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetEnvironmentVariables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetFolderPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::System__Environment__SpecialFolder)>(&System::Environment::GetFolderPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24871d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetWindowsFolderPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&System::Environment::GetWindowsFolderPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetWindowsFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetFolderPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::System__Environment__SpecialFolder, System::System__Environment__SpecialFolderOption)>(&System::Environment::GetFolderPath)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24871dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolderOption>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.ReadXdgUserDir
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Environment::ReadXdgUserDir)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x24876cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "ReadXdgUserDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.UnixGetFolderPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::System__Environment__SpecialFolder, System::System__Environment__SpecialFolderOption)>(&System::Environment::UnixGetFolderPath)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x248722c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "UnixGetFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolderOption>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetEnvironmentVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, System::EnvironmentVariableTarget)>(&System::Environment::GetEnvironmentVariable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2487b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::EnvironmentVariableTarget>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.SetEnvironmentVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::Environment::SetEnvironmentVariable)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2487b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "SetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.InternalSetEnvironmentVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, int32_t, void*, int32_t)>(&System::Environment::InternalSetEnvironmentVariable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "InternalSetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.InternalSetEnvironmentVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::Environment::InternalSetEnvironmentVariable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2487cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "InternalSetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.FailFast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, System::Exception)>(&System::Environment::FailFast)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2487d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "FailFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.FailFast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, System::Exception, ::StringW)>(&System::Environment::FailFast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "FailFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_ProcessorCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Environment::get_ProcessorCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_ProcessorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_IsRunningOnWindows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::get_IsRunningOnWindows)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2487214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_IsRunningOnWindows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetLogicalDrivesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&System::Environment::GetLogicalDrivesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetLogicalDrivesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetEnvironmentVariableNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&System::Environment::GetEnvironmentVariableNames)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24871d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetEnvironmentVariableNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetMachineConfigPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::GetMachineConfigPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetMachineConfigPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.internalGetHome
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::internalGetHome)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "internalGetHome",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetPageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Environment::GetPageSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2487d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.get_IsUnix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::get_IsUnix)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2487d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_IsUnix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Environment.GetStackTrace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Exception, bool)>(&System::Environment::GetStackTrace)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2487d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetStackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Environment::__set_nl(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "nl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Environment::__get_nl()  {
return ::cordl_internals::getStaticField<::StringW, "nl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get>();
}
 void System::Environment::__set_os(System::OperatingSystem value)  {
::cordl_internals::setStaticField<System::OperatingSystem, "os", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get>(std::forward<System::OperatingSystem>(value));
}
 System::OperatingSystem System::Environment::__get_os()  {
return ::cordl_internals::getStaticField<System::OperatingSystem, "os", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get>();
}
 ::StringW System::Environment::GetResourceString(::StringW key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetResourceString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, key);
}
 ::StringW System::Environment::GetResourceString(::StringW key, ::ArrayW<::bs_hook::Il2CppWrapperType> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetResourceString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, key, values);
}
 ::StringW System::Environment::GetResourceStringEncodingName(int32_t codePage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetResourceStringEncodingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, codePage);
}
 ::StringW System::Environment::get_CurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_CurrentDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 int32_t System::Environment::get_CurrentManagedThreadId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_CurrentManagedThreadId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool System::Environment::get_HasShutdownStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_HasShutdownStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::get_MachineName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_MachineName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::GetNewLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::get_NewLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_NewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 System::PlatformID System::Environment::get_Platform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_Platform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::PlatformID, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::GetOSVersionString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetOSVersionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 System::OperatingSystem System::Environment::get_OSVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_OSVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::OperatingSystem, false>(nullptr, ___internal_method);
}
 System::Version System::Environment::CreateVersionFromString(::StringW info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "CreateVersionFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Version, false>(nullptr, ___internal_method, info);
}
 ::StringW System::Environment::get_StackTrace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_StackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 int32_t System::Environment::get_TickCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_TickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::get_UserDomainName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_UserDomainName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::get_UserName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_UserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 void System::Environment::Exit(int32_t exitCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "Exit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exitCode);
}
 ::ArrayW<::StringW> System::Environment::GetCommandLineArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::internalGetEnvironmentVariable_native(::cordl_internals::intptr_t variable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "internalGetEnvironmentVariable_native",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, variable);
}
 ::StringW System::Environment::internalGetEnvironmentVariable(::StringW variable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "internalGetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, variable);
}
 ::StringW System::Environment::GetEnvironmentVariable(::StringW variable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, variable);
}
 System::Collections::IDictionary System::Environment::GetEnvironmentVariables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetEnvironmentVariables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::GetFolderPath(System::System__Environment__SpecialFolder folder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, folder);
}
 ::StringW System::Environment::GetWindowsFolderPath(int32_t folder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetWindowsFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, folder);
}
 ::StringW System::Environment::GetFolderPath(System::System__Environment__SpecialFolder folder, System::System__Environment__SpecialFolderOption option)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolderOption>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, folder, option);
}
 ::StringW System::Environment::ReadXdgUserDir(::StringW config_dir, ::StringW home_dir, ::StringW key, ::StringW fallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "ReadXdgUserDir",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, config_dir, home_dir, key, fallback);
}
 ::StringW System::Environment::UnixGetFolderPath(System::System__Environment__SpecialFolder folder, System::System__Environment__SpecialFolderOption option)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "UnixGetFolderPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Environment__SpecialFolderOption>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, folder, option);
}
 ::StringW System::Environment::GetEnvironmentVariable(::StringW variable, System::EnvironmentVariableTarget target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::EnvironmentVariableTarget>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, variable, target);
}
 void System::Environment::SetEnvironmentVariable(::StringW variable, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "SetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, variable, value);
}
 void System::Environment::InternalSetEnvironmentVariable(void* variable, int32_t variable_length, void* value, int32_t value_length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "InternalSetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, variable, variable_length, value, value_length);
}
 void System::Environment::InternalSetEnvironmentVariable(::StringW variable, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "InternalSetEnvironmentVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, variable, value);
}
 void System::Environment::FailFast(::StringW message, System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "FailFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, exception);
}
 void System::Environment::FailFast(::StringW message, System::Exception exception, ::StringW errorSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "FailFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, exception, errorSource);
}
 int32_t System::Environment::get_ProcessorCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_ProcessorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool System::Environment::get_IsRunningOnWindows()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_IsRunningOnWindows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::ArrayW<::StringW> System::Environment::GetLogicalDrivesInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetLogicalDrivesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method);
}
 ::ArrayW<::StringW> System::Environment::GetEnvironmentVariableNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetEnvironmentVariableNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::GetMachineConfigPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetMachineConfigPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::internalGetHome()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "internalGetHome",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 int32_t System::Environment::GetPageSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool System::Environment::get_IsUnix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "get_IsUnix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::StringW System::Environment::GetStackTrace(System::Exception e, bool needFileInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Environment>::get(),
                            "GetStackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, e, needFileInfo);
}
