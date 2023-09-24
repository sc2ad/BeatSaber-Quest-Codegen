#pragma once
#include "GlobalNamespace/zzzz__AssemblyInfo_def.hpp"
//  Writing Method size for method: GlobalNamespace::AssemblyInfo.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::AssemblyInfo::get_Version)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x10fd2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AssemblyInfo>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AssemblyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AssemblyInfo::*)()>(&GlobalNamespace::AssemblyInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10fd45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AssemblyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::AssemblyInfo::__set_version(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "version", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AssemblyInfo>::get>(std::forward<::StringW>(value));
}
 ::StringW GlobalNamespace::AssemblyInfo::__get_version()  {
return ::cordl_internals::getStaticField<::StringW, "version", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AssemblyInfo>::get>();
}
 ::StringW GlobalNamespace::AssemblyInfo::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AssemblyInfo>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 GlobalNamespace::AssemblyInfo GlobalNamespace::AssemblyInfo::New_ctor()  {
GlobalNamespace::AssemblyInfo o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::AssemblyInfo>())};
return o;
}
 void GlobalNamespace::AssemblyInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AssemblyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
