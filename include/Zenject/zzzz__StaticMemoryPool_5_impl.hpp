#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
namespace {
#include "Zenject/zzzz__StaticMemoryPool_5_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_5_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Zenject::StaticMemoryPool_5._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::StaticMemoryPool_5::*)(::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>, ::System::Action_1<TValue>)>(&::Zenject::StaticMemoryPool_5::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticMemoryPool_5.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::StaticMemoryPool_5::*)(::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>)>(&::Zenject::StaticMemoryPool_5::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticMemoryPool_5.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Zenject::StaticMemoryPool_5::*)(TParam1, TParam2, TParam3, TParam4)>(&::Zenject::StaticMemoryPool_5::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>
constexpr  ::Zenject::StaticMemoryPool_5::operator ::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>() const noexcept {
return ::Zenject::IMemoryPool_5<TParam1,TParam2,TParam3,TParam4,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  ::Zenject::StaticMemoryPool_5::operator ::Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return ::Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr  ::Zenject::StaticMemoryPool_5::operator ::Zenject::IMemoryPool() const noexcept {
return ::Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::StaticMemoryPool_5::__set__onSpawnMethod(::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> value)  {
::cordl_internals::setInstanceField<::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>>(value));
}
constexpr ::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> ::Zenject::StaticMemoryPool_5::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "::System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }]
 ::Zenject::StaticMemoryPool_5::StaticMemoryPool_5(::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod)  : ::Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_5>(onSpawnMethod, onDespawnedMethod))) {}
/// @param onDespawnedMethod: ::System::Action_1<TValue> (default: csnull)
 void ::Zenject::StaticMemoryPool_5::_ctor(::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void ::Zenject::StaticMemoryPool_5::set_OnSpawnMethod(::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_5<TParam1,TParam2,TParam3,TParam4,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue ::Zenject::StaticMemoryPool_5::Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_5>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3, p4);
}
} // end anonymous namespace
