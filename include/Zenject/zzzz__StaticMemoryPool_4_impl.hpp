#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
namespace {
#include "Zenject/zzzz__StaticMemoryPool_4_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "Zenject/zzzz__IMemoryPool_4_def.hpp"
//  Writing Method size for method: ::Zenject::StaticMemoryPool_4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::StaticMemoryPool_4::*)(::System::Action_4<TParam1,TParam2,TParam3,TValue>, ::System::Action_1<TValue>)>(&::Zenject::StaticMemoryPool_4::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<TParam1,TParam2,TParam3,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticMemoryPool_4.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::StaticMemoryPool_4::*)(::System::Action_4<TParam1,TParam2,TParam3,TValue>)>(&::Zenject::StaticMemoryPool_4::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_4>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<TParam1,TParam2,TParam3,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticMemoryPool_4.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Zenject::StaticMemoryPool_4::*)(TParam1, TParam2, TParam3)>(&::Zenject::StaticMemoryPool_4::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_4>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>
constexpr  ::Zenject::StaticMemoryPool_4::operator ::Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>() const noexcept {
return ::Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  ::Zenject::StaticMemoryPool_4::operator ::Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return ::Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr  ::Zenject::StaticMemoryPool_4::operator ::Zenject::IMemoryPool() const noexcept {
return ::Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::StaticMemoryPool_4::__set__onSpawnMethod(::System::Action_4<TParam1,TParam2,TParam3,TValue> value)  {
::cordl_internals::setInstanceField<::System::Action_4<TParam1,TParam2,TParam3,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_4<TParam1,TParam2,TParam3,TValue>>(value));
}
constexpr ::System::Action_4<TParam1,TParam2,TParam3,TValue> ::Zenject::StaticMemoryPool_4::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_4<TParam1,TParam2,TParam3,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "::System::Action_4<TParam1,TParam2,TParam3,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "::System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }]
 ::Zenject::StaticMemoryPool_4::StaticMemoryPool_4(::System::Action_4<TParam1,TParam2,TParam3,TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod)  : ::Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_4>(onSpawnMethod, onDespawnedMethod))) {}
/// @param onDespawnedMethod: ::System::Action_1<TValue> (default: csnull)
 void ::Zenject::StaticMemoryPool_4::_ctor(::System::Action_4<TParam1,TParam2,TParam3,TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<TParam1,TParam2,TParam3,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void ::Zenject::StaticMemoryPool_4::set_OnSpawnMethod(::System::Action_4<TParam1,TParam2,TParam3,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_4>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<TParam1,TParam2,TParam3,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue ::Zenject::StaticMemoryPool_4::Spawn(TParam1 p1, TParam2 p2, TParam3 p3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_4>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, p1, p2, p3);
}
} // end anonymous namespace
