#pragma once
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_impl.hpp"
namespace {
#include "Zenject/zzzz__PoolableMemoryPoolProvider_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Zenject::PoolableMemoryPoolProvider_3._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PoolableMemoryPoolProvider_3::*)(::Zenject::DiContainer, ::System::Guid)>(&::Zenject::PoolableMemoryPoolProvider_3::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableMemoryPoolProvider_3.Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PoolableMemoryPoolProvider_3::*)()>(&::Zenject::PoolableMemoryPoolProvider_3::Validate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_3>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PoolableMemoryPoolProvider_3.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PoolableMemoryPoolProvider_3::*)(::Zenject::InjectContext, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, ByRef<::System::Action>, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&::Zenject::PoolableMemoryPoolProvider_3::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::PoolableMemoryPoolProvider_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_3>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IValidatable
constexpr  ::Zenject::PoolableMemoryPoolProvider_3::operator ::Zenject::IValidatable() const noexcept {
return ::Zenject::IValidatable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::PoolableMemoryPoolProvider_3::__set__pool(TMemoryPool value)  {
::cordl_internals::setInstanceField<TMemoryPool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMemoryPool>(value));
}
constexpr TMemoryPool ::Zenject::PoolableMemoryPoolProvider_3::__get__pool() const {
return ::cordl_internals::getInstanceField<TMemoryPool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "poolId", ty: "::System::Guid", modifiers: "", def_value: None }]
 ::Zenject::PoolableMemoryPoolProvider_3::PoolableMemoryPoolProvider_3(::Zenject::DiContainer container, ::System::Guid poolId)  : ::Zenject::PoolableMemoryPoolProviderBase_1<TContract>(THROW_UNLESS(::il2cpp_utils::New<PoolableMemoryPoolProvider_3>(container, poolId))) {}
 void ::Zenject::PoolableMemoryPoolProvider_3::_ctor(::Zenject::DiContainer container, ::System::Guid poolId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_3>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, poolId);
}
 void ::Zenject::PoolableMemoryPoolProvider_3::Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_3>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::PoolableMemoryPoolProvider_3::GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableMemoryPoolProvider_3>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
} // end anonymous namespace
