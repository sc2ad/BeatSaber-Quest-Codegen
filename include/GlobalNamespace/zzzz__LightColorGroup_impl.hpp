#pragma once
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupParent_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType::GlobalNamespace__LightColorGroup__LightColorGroupControlType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType  GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType::LightWithIdsFromHierarchy{0};
constexpr GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType  GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType::LightWithIdsCollection{1};
//  Writing Method size for method: GlobalNamespace::LightColorGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorGroup::*)()>(&GlobalNamespace::LightColorGroup::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x225cbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IEditTimeValidated
constexpr  GlobalNamespace::LightColorGroup::operator GlobalNamespace::IEditTimeValidated() const noexcept {
return GlobalNamespace::IEditTimeValidated(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightColorGroup::__set__lightColorGroupControlType(GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType GlobalNamespace::LightColorGroup::__get__lightColorGroupControlType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LightColorGroup__LightColorGroupControlType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightColorGroup::__set__disableAutomaticIdAssignment(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightColorGroup::__get__disableAutomaticIdAssignment() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightColorGroup::__set__lightColorGroupParents(System::Collections::Generic::List_1<GlobalNamespace::LightColorGroupParent> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::LightColorGroupParent>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::LightColorGroupParent>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::LightColorGroupParent> GlobalNamespace::LightColorGroup::__get__lightColorGroupParents() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::LightColorGroupParent>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightColorGroup::__set__lightWithIds(GlobalNamespace::LightWithIds value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightWithIds, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightWithIds>(value));
}
constexpr GlobalNamespace::LightWithIds GlobalNamespace::LightColorGroup::__get__lightWithIds() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightWithIds, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::LightColorGroup GlobalNamespace::LightColorGroup::New_ctor()  {
GlobalNamespace::LightColorGroup o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LightColorGroup>())};
return o;
}
 void GlobalNamespace::LightColorGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
