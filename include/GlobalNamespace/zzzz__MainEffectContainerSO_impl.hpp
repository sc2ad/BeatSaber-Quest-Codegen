#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.get_mainEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MainEffectSO (::GlobalNamespace::MainEffectContainerSO::*)()>(&::GlobalNamespace::MainEffectContainerSO::get_mainEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2676d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectContainerSO>::get(),
                            "get_mainEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)()>(&::GlobalNamespace::MainEffectContainerSO::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2676d88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MainEffectContainerSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectContainerSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)(::GlobalNamespace::MainEffectSO)>(&::GlobalNamespace::MainEffectContainerSO::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2676e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectContainerSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainEffectSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)()>(&::GlobalNamespace::MainEffectContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2676e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MainEffectContainerSO::__set__mainEffect(::GlobalNamespace::MainEffectSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainEffectSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MainEffectSO>(value));
}
constexpr ::GlobalNamespace::MainEffectSO ::GlobalNamespace::MainEffectContainerSO::__get__mainEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainEffectSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainEffectContainerSO::__set__postProcessEnabled(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainEffectContainerSO::__get__postProcessEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::MainEffectSO ::GlobalNamespace::MainEffectContainerSO::get_mainEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectContainerSO>::get(),
                            "get_mainEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MainEffectSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MainEffectContainerSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectContainerSO>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MainEffectContainerSO::Init(::GlobalNamespace::MainEffectSO mainEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectContainerSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainEffectSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mainEffect);
}
// Ctor Parameters []
 ::GlobalNamespace::MainEffectContainerSO::MainEffectContainerSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<MainEffectContainerSO>())) {}
 void ::GlobalNamespace::MainEffectContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
