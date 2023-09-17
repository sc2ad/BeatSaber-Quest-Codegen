#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO.get_easeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EaseType (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212c294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO.get_easeDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::get_easeDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212c29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO>::get(),
                            "get_easeDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212c2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::TransitionTimingSO::__set__easeType(::GlobalNamespace::EaseType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType ::GlobalNamespace::TransitionTimingSO::__get__easeType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransitionTimingSO::__set__easeDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::TransitionTimingSO::__get__easeDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::EaseType ::GlobalNamespace::TransitionTimingSO::get_easeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::TransitionTimingSO::get_easeDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO>::get(),
                            "get_easeDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::TransitionTimingSO::TransitionTimingSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<TransitionTimingSO>())) {}
 void ::GlobalNamespace::TransitionTimingSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransitionTimingSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
