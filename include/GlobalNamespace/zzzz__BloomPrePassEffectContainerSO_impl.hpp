#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO.get_bloomPrePassEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BloomPrePassEffectSO (::GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(&::GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f94608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO>::get(),
                            "get_bloomPrePassEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassEffectContainerSO::*)(::GlobalNamespace::BloomPrePassEffectSO)>(&::GlobalNamespace::BloomPrePassEffectContainerSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f94610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassEffectSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassEffectContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(&::GlobalNamespace::BloomPrePassEffectContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f94618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BloomPrePassEffectContainerSO::__set__bloomPrePassEffect(::GlobalNamespace::BloomPrePassEffectSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassEffectSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BloomPrePassEffectSO>(value));
}
constexpr ::GlobalNamespace::BloomPrePassEffectSO ::GlobalNamespace::BloomPrePassEffectContainerSO::__get__bloomPrePassEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassEffectSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::BloomPrePassEffectSO ::GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO>::get(),
                            "get_bloomPrePassEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BloomPrePassEffectSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassEffectContainerSO::Init(::GlobalNamespace::BloomPrePassEffectSO bloomPrePassEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassEffectSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bloomPrePassEffect);
}
// Ctor Parameters []
 ::GlobalNamespace::BloomPrePassEffectContainerSO::BloomPrePassEffectContainerSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassEffectContainerSO>())) {}
 void ::GlobalNamespace::BloomPrePassEffectContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassEffectContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
