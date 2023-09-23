#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "System/zzzz__Action_7_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_7_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: Zenject::StaticMemoryPool_7._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>, System::Action_1<TValue>)>(&Zenject::StaticMemoryPool_7::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>)>(&Zenject::StaticMemoryPool_7::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (Zenject::StaticMemoryPool_7::*)(TParam1, TParam2, TParam3, TParam4, TParam5, TParam6)>(&Zenject::StaticMemoryPool_7::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>() const noexcept {
return Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::StaticMemoryPool_7::__set__onSpawnMethod(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> value)  {
::cordl_internals::setInstanceField<System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>>(value));
}
constexpr System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> Zenject::StaticMemoryPool_7::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }]
 Zenject::StaticMemoryPool_7::StaticMemoryPool_7(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  : Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_7>(onSpawnMethod, onDespawnedMethod))) {}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 void Zenject::StaticMemoryPool_7::_ctor(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void Zenject::StaticMemoryPool_7::set_OnSpawnMethod(System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue Zenject::StaticMemoryPool_7::Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4, p5, p6);
}
//  Writing Method size for method: Zenject::StaticMemoryPool_7._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>, System::Action_1<TValue>)>(&Zenject::StaticMemoryPool_7::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>)>(&Zenject::StaticMemoryPool_7::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (Zenject::StaticMemoryPool_7::*)(UnityEngine::Color, UnityEngine::Color, TParam3, float_t, System::Int32Enum, float_t)>(&Zenject::StaticMemoryPool_7::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IMemoryPool_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>() const noexcept {
return Zenject::IMemoryPool_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::StaticMemoryPool_7::__set__onSpawnMethod(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> value)  {
::cordl_internals::setInstanceField<System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>>(value));
}
constexpr System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> Zenject::StaticMemoryPool_7::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }]
 Zenject::StaticMemoryPool_7::StaticMemoryPool_7(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  : Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_7>(onSpawnMethod, onDespawnedMethod))) {}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 void Zenject::StaticMemoryPool_7::_ctor(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void Zenject::StaticMemoryPool_7::set_OnSpawnMethod(System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Color,UnityEngine::Color,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue Zenject::StaticMemoryPool_7::Spawn(UnityEngine::Color p1, UnityEngine::Color p2, TParam3 p3, float_t p4, System::Int32Enum p5, float_t p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4, p5, p6);
}
//  Writing Method size for method: Zenject::StaticMemoryPool_7._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>, System::Action_1<TValue>)>(&Zenject::StaticMemoryPool_7::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>)>(&Zenject::StaticMemoryPool_7::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (Zenject::StaticMemoryPool_7::*)(float_t, float_t, TParam3, float_t, System::Int32Enum, float_t)>(&Zenject::StaticMemoryPool_7::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>() const noexcept {
return Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::StaticMemoryPool_7::__set__onSpawnMethod(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> value)  {
::cordl_internals::setInstanceField<System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>>(value));
}
constexpr System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> Zenject::StaticMemoryPool_7::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }]
 Zenject::StaticMemoryPool_7::StaticMemoryPool_7(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  : Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_7>(onSpawnMethod, onDespawnedMethod))) {}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 void Zenject::StaticMemoryPool_7::_ctor(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void Zenject::StaticMemoryPool_7::set_OnSpawnMethod(System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<float_t,float_t,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue Zenject::StaticMemoryPool_7::Spawn(float_t p1, float_t p2, TParam3 p3, float_t p4, System::Int32Enum p5, float_t p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4, p5, p6);
}
//  Writing Method size for method: Zenject::StaticMemoryPool_7._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>, System::Action_1<TValue>)>(&Zenject::StaticMemoryPool_7::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>)>(&Zenject::StaticMemoryPool_7::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (Zenject::StaticMemoryPool_7::*)(UnityEngine::Vector2, UnityEngine::Vector2, TParam3, float_t, System::Int32Enum, float_t)>(&Zenject::StaticMemoryPool_7::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>() const noexcept {
return Zenject::IMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::StaticMemoryPool_7::__set__onSpawnMethod(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> value)  {
::cordl_internals::setInstanceField<System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>>(value));
}
constexpr System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> Zenject::StaticMemoryPool_7::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }]
 Zenject::StaticMemoryPool_7::StaticMemoryPool_7(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  : Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_7>(onSpawnMethod, onDespawnedMethod))) {}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 void Zenject::StaticMemoryPool_7::_ctor(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void Zenject::StaticMemoryPool_7::set_OnSpawnMethod(System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Vector2,UnityEngine::Vector2,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue Zenject::StaticMemoryPool_7::Spawn(UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, TParam3 p3, float_t p4, System::Int32Enum p5, float_t p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4, p5, p6);
}
//  Writing Method size for method: Zenject::StaticMemoryPool_7._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>, System::Action_1<TValue>)>(&Zenject::StaticMemoryPool_7::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::StaticMemoryPool_7::*)(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>)>(&Zenject::StaticMemoryPool_7::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::StaticMemoryPool_7.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (Zenject::StaticMemoryPool_7::*)(UnityEngine::Vector3, UnityEngine::Vector3, TParam3, float_t, System::Int32Enum, float_t)>(&Zenject::StaticMemoryPool_7::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>() const noexcept {
return Zenject::IMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IMemoryPool
constexpr  Zenject::StaticMemoryPool_7::operator Zenject::IMemoryPool() const noexcept {
return Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::StaticMemoryPool_7::__set__onSpawnMethod(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> value)  {
::cordl_internals::setInstanceField<System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>>(value));
}
constexpr System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> Zenject::StaticMemoryPool_7::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }]
 Zenject::StaticMemoryPool_7::StaticMemoryPool_7(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  : Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_7>(onSpawnMethod, onDespawnedMethod))) {}
/// @param onDespawnedMethod: System::Action_1<TValue> (default: csnull)
 void Zenject::StaticMemoryPool_7::_ctor(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void Zenject::StaticMemoryPool_7::set_OnSpawnMethod(System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_7<UnityEngine::Vector3,UnityEngine::Vector3,TParam3,float_t,System::Int32Enum,float_t,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue Zenject::StaticMemoryPool_7::Spawn(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, TParam3 p3, float_t p4, System::Int32Enum p5, float_t p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPool_7>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4, p5, p6);
}
