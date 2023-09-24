#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult  GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult::OK{0};
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult  GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult::Failed{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult  GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::OK{0};
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult  GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult::Failed{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult  GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::OK{0};
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult  GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult::Failed{1};
// Ctor Parameters [CppParam { name: "result", ty: "GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "entitlementsLabels", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult(GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult result, ::ArrayW<::StringW> entitlementsLabels) noexcept : ::bs_hook::ValueTypeWrapper() {this->result = result;
this->entitlementsLabels = entitlementsLabels;
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult::__set_result(GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult>(value));
}
constexpr GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult::__get_result() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__GetAdditionalContentEntitlementsResult, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult::__set_entitlementsLabels(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x8>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult::__get_entitlementsLabels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x8>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::ISonyCommerceHelper.GetAdditionalContentEntitlementsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> (GlobalNamespace::ISonyCommerceHelper::*)(System::Threading::CancellationToken)>(&GlobalNamespace::ISonyCommerceHelper::GetAdditionalContentEntitlementsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISonyCommerceHelper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyCommerceHelper>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ISonyCommerceHelper.DisplayProductBrowseDialogAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> (GlobalNamespace::ISonyCommerceHelper::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::ISonyCommerceHelper::DisplayProductBrowseDialogAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISonyCommerceHelper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyCommerceHelper>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ISonyCommerceHelper.DisplayCategoryBrowseDialogAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult> (GlobalNamespace::ISonyCommerceHelper::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::ISonyCommerceHelper::DisplayCategoryBrowseDialogAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISonyCommerceHelper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyCommerceHelper>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> GlobalNamespace::ISonyCommerceHelper::GetAdditionalContentEntitlementsAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyCommerceHelper>::get(),
                            "GetAdditionalContentEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> GlobalNamespace::ISonyCommerceHelper::DisplayProductBrowseDialogAsync(::StringW productLabel, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyCommerceHelper>::get(),
                            "DisplayProductBrowseDialogAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, false>(const_cast<void*>(instance), ___internal_method, productLabel, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult> GlobalNamespace::ISonyCommerceHelper::DisplayCategoryBrowseDialogAsync(::StringW categoryLabel, System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyCommerceHelper>::get(),
                            "DisplayCategoryBrowseDialogAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayCategoryBrowseDialogResult>, false>(const_cast<void*>(instance), ___internal_method, categoryLabel, token);
}
