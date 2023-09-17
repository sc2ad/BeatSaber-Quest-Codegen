#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
namespace {
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
//  Writing Method size for method: ::Zenject::StaticMemoryPool_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::StaticMemoryPool_1::*)(::System::Action_1<TValue>, ::System::Action_1<TValue>, int32_t)>(&::Zenject::StaticMemoryPool_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticMemoryPool_1.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::StaticMemoryPool_1::*)(::System::Action_1<TValue>)>(&::Zenject::StaticMemoryPool_1::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticMemoryPool_1.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Zenject::StaticMemoryPool_1::*)()>(&::Zenject::StaticMemoryPool_1::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IMemoryPool_1<TValue>
constexpr  ::Zenject::StaticMemoryPool_1::operator ::Zenject::IMemoryPool_1<TValue>() const noexcept {
return ::Zenject::IMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  ::Zenject::StaticMemoryPool_1::operator ::Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return ::Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr  ::Zenject::StaticMemoryPool_1::operator ::Zenject::IMemoryPool() const noexcept {
return ::Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::StaticMemoryPool_1::__set__onSpawnMethod(::System::Action_1<TValue> value)  {
::cordl_internals::setInstanceField<::System::Action_1<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<TValue>>(value));
}
constexpr ::System::Action_1<TValue> ::Zenject::StaticMemoryPool_1::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_1<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "::System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onDespawnedMethod", ty: "::System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: Some("0") }]
 ::Zenject::StaticMemoryPool_1::StaticMemoryPool_1(::System::Action_1<TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod, int32_t initialSize)  : ::Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_1>(onSpawnMethod, onDespawnedMethod, initialSize))) {}
/// @param onSpawnMethod: ::System::Action_1<TValue> (default: csnull)
/// @param onDespawnedMethod: ::System::Action_1<TValue> (default: csnull)
/// @param initialSize: int32_t (default: 0)
 void ::Zenject::StaticMemoryPool_1::_ctor(::System::Action_1<TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod, int32_t initialSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod, initialSize);
}
 void ::Zenject::StaticMemoryPool_1::set_OnSpawnMethod(::System::Action_1<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue ::Zenject::StaticMemoryPool_1::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
