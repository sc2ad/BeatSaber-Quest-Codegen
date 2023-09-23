#pragma once
#include "System/zzzz__Platform_def.hpp"
//  Writing Method size for method: System::Platform.uname
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t)>(&System::Platform::uname)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27bbe98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "uname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Platform.CheckOS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Platform::CheckOS)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x27bbf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "CheckOS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Platform.get_IsMacOS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsMacOS)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27bc120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsMacOS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Platform.get_IsFreeBSD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsFreeBSD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27bc200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsFreeBSD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Platform.get_IsOpenBSD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsOpenBSD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27bc25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsOpenBSD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Platform.get_IsIBMi
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsIBMi)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27bc2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsIBMi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Platform.get_IsAix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Platform::get_IsAix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27bc314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsAix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Platform::__set_checkedOS(bool value)  {
::cordl_internals::setStaticField<bool, "checkedOS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>(std::forward<bool>(value));
}
 bool System::Platform::__get_checkedOS()  {
return ::cordl_internals::getStaticField<bool, "checkedOS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>();
}
 void System::Platform::__set_isMacOS(bool value)  {
::cordl_internals::setStaticField<bool, "isMacOS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>(std::forward<bool>(value));
}
 bool System::Platform::__get_isMacOS()  {
return ::cordl_internals::getStaticField<bool, "isMacOS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>();
}
 void System::Platform::__set_isAix(bool value)  {
::cordl_internals::setStaticField<bool, "isAix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>(std::forward<bool>(value));
}
 bool System::Platform::__get_isAix()  {
return ::cordl_internals::getStaticField<bool, "isAix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>();
}
 void System::Platform::__set_isIBMi(bool value)  {
::cordl_internals::setStaticField<bool, "isIBMi", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>(std::forward<bool>(value));
}
 bool System::Platform::__get_isIBMi()  {
return ::cordl_internals::getStaticField<bool, "isIBMi", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>();
}
 void System::Platform::__set_isFreeBSD(bool value)  {
::cordl_internals::setStaticField<bool, "isFreeBSD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>(std::forward<bool>(value));
}
 bool System::Platform::__get_isFreeBSD()  {
return ::cordl_internals::getStaticField<bool, "isFreeBSD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>();
}
 void System::Platform::__set_isOpenBSD(bool value)  {
::cordl_internals::setStaticField<bool, "isOpenBSD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>(std::forward<bool>(value));
}
 bool System::Platform::__get_isOpenBSD()  {
return ::cordl_internals::getStaticField<bool, "isOpenBSD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get>();
}
 int32_t System::Platform::uname(::cordl_internals::intptr_t buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "uname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buf);
}
 void System::Platform::CheckOS()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "CheckOS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool System::Platform::get_IsMacOS()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsMacOS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::Platform::get_IsFreeBSD()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsFreeBSD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::Platform::get_IsOpenBSD()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsOpenBSD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::Platform::get_IsIBMi()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsIBMi",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::Platform::get_IsAix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Platform>::get(),
                            "get_IsAix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
