#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
namespace {
#include "Zenject/zzzz__StaticMemoryPool_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Zenject::StaticMemoryPool_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::StaticMemoryPool_2::*)(::System::Action_2<TParam1,TValue>, ::System::Action_1<TValue>)>(&::Zenject::StaticMemoryPool_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TParam1,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticMemoryPool_2.set_OnSpawnMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::StaticMemoryPool_2::*)(::System::Action_2<TParam1,TValue>)>(&::Zenject::StaticMemoryPool_2::set_OnSpawnMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TParam1,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticMemoryPool_2.Spawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Zenject::StaticMemoryPool_2::*)(TParam1)>(&::Zenject::StaticMemoryPool_2::Spawn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IMemoryPool_2<TParam1,TValue>
constexpr  ::Zenject::StaticMemoryPool_2::operator ::Zenject::IMemoryPool_2<TParam1,TValue>() const noexcept {
return ::Zenject::IMemoryPool_2<TParam1,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Zenject::IDespawnableMemoryPool_1<TValue>
constexpr  ::Zenject::StaticMemoryPool_2::operator ::Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept {
return ::Zenject::IDespawnableMemoryPool_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr  ::Zenject::StaticMemoryPool_2::operator ::Zenject::IMemoryPool() const noexcept {
return ::Zenject::IMemoryPool(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::StaticMemoryPool_2::__set__onSpawnMethod(::System::Action_2<TParam1,TValue> value)  {
::cordl_internals::setInstanceField<::System::Action_2<TParam1,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<TParam1,TValue>>(value));
}
constexpr ::System::Action_2<TParam1,TValue> ::Zenject::StaticMemoryPool_2::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TParam1,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "::System::Action_2<TParam1,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "::System::Action_1<TValue>", modifiers: "", def_value: Some("csnull") }]
 ::Zenject::StaticMemoryPool_2::StaticMemoryPool_2(::System::Action_2<TParam1,TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod)  : ::Zenject::StaticMemoryPoolBase_1<TValue>(THROW_UNLESS(::il2cpp_utils::New<StaticMemoryPool_2>(onSpawnMethod, onDespawnedMethod))) {}
/// @param onDespawnedMethod: ::System::Action_1<TValue> (default: csnull)
 void ::Zenject::StaticMemoryPool_2::_ctor(::System::Action_2<TParam1,TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TParam1,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onSpawnMethod, onDespawnedMethod);
}
 void ::Zenject::StaticMemoryPool_2::set_OnSpawnMethod(::System::Action_2<TParam1,TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TParam1,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValue ::Zenject::StaticMemoryPool_2::Spawn(TParam1 param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, param);
}
} // end anonymous namespace
