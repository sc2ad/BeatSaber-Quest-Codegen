#pragma once
#include "Zenject/zzzz__SceneContextRegistryAdderAndRemover_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__SceneContextRegistry_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: Zenject::SceneContextRegistryAdderAndRemover._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistryAdderAndRemover::*)(Zenject::SceneContext, Zenject::SceneContextRegistry)>(&Zenject::SceneContextRegistryAdderAndRemover::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d9f454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SceneContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SceneContextRegistry>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SceneContextRegistryAdderAndRemover.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistryAdderAndRemover::*)()>(&Zenject::SceneContextRegistryAdderAndRemover::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d9f480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SceneContextRegistryAdderAndRemover.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistryAdderAndRemover::*)()>(&Zenject::SceneContextRegistryAdderAndRemover::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d9f4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SceneContextRegistryAdderAndRemover.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::SceneContextRegistryAdderAndRemover::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d9f4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SceneContextRegistryAdderAndRemover.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2d9f5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IInitializable
constexpr  Zenject::SceneContextRegistryAdderAndRemover::operator Zenject::IInitializable() const noexcept {
return Zenject::IInitializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  Zenject::SceneContextRegistryAdderAndRemover::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SceneContextRegistryAdderAndRemover::__set__registry(Zenject::SceneContextRegistry value)  {
::cordl_internals::setInstanceField<Zenject::SceneContextRegistry, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SceneContextRegistry>(value));
}
constexpr Zenject::SceneContextRegistry Zenject::SceneContextRegistryAdderAndRemover::__get__registry() const {
return ::cordl_internals::getInstanceField<Zenject::SceneContextRegistry, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SceneContextRegistryAdderAndRemover::__set__sceneContext(Zenject::SceneContext value)  {
::cordl_internals::setInstanceField<Zenject::SceneContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SceneContext>(value));
}
constexpr Zenject::SceneContext Zenject::SceneContextRegistryAdderAndRemover::__get__sceneContext() const {
return ::cordl_internals::getInstanceField<Zenject::SceneContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "sceneContext", ty: "Zenject::SceneContext", modifiers: "", def_value: None }, CppParam { name: "registry", ty: "Zenject::SceneContextRegistry", modifiers: "", def_value: None }]
 Zenject::SceneContextRegistryAdderAndRemover::SceneContextRegistryAdderAndRemover(Zenject::SceneContext sceneContext, Zenject::SceneContextRegistry registry)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SceneContextRegistryAdderAndRemover>(sceneContext, registry))) {}
 void Zenject::SceneContextRegistryAdderAndRemover::_ctor(Zenject::SceneContext sceneContext, Zenject::SceneContextRegistry registry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SceneContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SceneContextRegistry>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sceneContext, registry);
}
 void Zenject::SceneContextRegistryAdderAndRemover::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::SceneContextRegistryAdderAndRemover::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::SceneContextRegistryAdderAndRemover::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SceneContextRegistryAdderAndRemover>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
