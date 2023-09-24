#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type::UnityEngine__GUILayoutOption__Type(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UnityEngine__GUILayoutOption__Type::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UnityEngine__GUILayoutOption__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::fixedWidth{0};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::fixedHeight{1};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::minWidth{2};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::maxWidth{3};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::minHeight{4};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::maxHeight{5};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::stretchWidth{6};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::stretchHeight{7};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::alignStart{8};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::alignMiddle{9};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::alignEnd{10};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::alignJustify{11};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::equalSize{12};
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type  UnityEngine::UnityEngine__GUILayoutOption__Type::spacing{13};
//  Writing Method size for method: UnityEngine::GUILayoutOption._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutOption::*)(UnityEngine::UnityEngine__GUILayoutOption__Type, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::GUILayoutOption::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b95f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GUILayoutOption>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__GUILayoutOption__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::GUILayoutOption::__set_type(UnityEngine::UnityEngine__GUILayoutOption__Type value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__GUILayoutOption__Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__GUILayoutOption__Type>(value));
}
constexpr UnityEngine::UnityEngine__GUILayoutOption__Type UnityEngine::GUILayoutOption::__get_type() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__GUILayoutOption__Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::GUILayoutOption::__set_value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::GUILayoutOption::__get_value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::GUILayoutOption UnityEngine::GUILayoutOption::New_ctor(UnityEngine::UnityEngine__GUILayoutOption__Type type, ::bs_hook::Il2CppWrapperType value)  {
UnityEngine::GUILayoutOption o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::GUILayoutOption>(type, value))};
return o;
}
 void UnityEngine::GUILayoutOption::_ctor(UnityEngine::UnityEngine__GUILayoutOption__Type type, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GUILayoutOption>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__GUILayoutOption__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, value);
}
