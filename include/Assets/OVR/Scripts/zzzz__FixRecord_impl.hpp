#pragma once
#include "Assets/OVR/Scripts/zzzz__Record_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__FixRecord_def.hpp"
#include "Assets/OVR/Scripts/zzzz__FixMethodDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: Assets::OVR::Scripts::FixRecord._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Assets::OVR::Scripts::FixRecord::*)(int32_t, ::StringW, ::StringW, Assets::OVR::Scripts::FixMethodDelegate, UnityEngine::Object, bool, ::ArrayW<::StringW>)>(&Assets::OVR::Scripts::FixRecord::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x266abb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Assets::OVR::Scripts::FixMethodDelegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Assets::OVR::Scripts::FixRecord::__set_fixMethod(Assets::OVR::Scripts::FixMethodDelegate value)  {
::cordl_internals::setInstanceField<Assets::OVR::Scripts::FixMethodDelegate, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Assets::OVR::Scripts::FixMethodDelegate>(value));
}
constexpr Assets::OVR::Scripts::FixMethodDelegate Assets::OVR::Scripts::FixRecord::__get_fixMethod() const {
return ::cordl_internals::getInstanceField<Assets::OVR::Scripts::FixMethodDelegate, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Assets::OVR::Scripts::FixRecord::__set_targetObject(UnityEngine::Object value)  {
::cordl_internals::setInstanceField<UnityEngine::Object, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Object>(value));
}
constexpr UnityEngine::Object Assets::OVR::Scripts::FixRecord::__get_targetObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::Object, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Assets::OVR::Scripts::FixRecord::__set_buttonNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> Assets::OVR::Scripts::FixRecord::__get_buttonNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Assets::OVR::Scripts::FixRecord::__set_editModeRequired(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Assets::OVR::Scripts::FixRecord::__get_editModeRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Assets::OVR::Scripts::FixRecord::__set_complete(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Assets::OVR::Scripts::FixRecord::__get_complete() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Assets::OVR::Scripts::FixRecord Assets::OVR::Scripts::FixRecord::New_ctor(int32_t order, ::StringW cat, ::StringW msg, Assets::OVR::Scripts::FixMethodDelegate fix, UnityEngine::Object target, bool editRequired, ::ArrayW<::StringW> buttons)  {
Assets::OVR::Scripts::FixRecord o{THROW_UNLESS(::il2cpp_utils::New<Assets::OVR::Scripts::FixRecord>(order, cat, msg, fix, target, editRequired, buttons))};
return o;
}
 void Assets::OVR::Scripts::FixRecord::_ctor(int32_t order, ::StringW cat, ::StringW msg, Assets::OVR::Scripts::FixMethodDelegate fix, UnityEngine::Object target, bool editRequired, ::ArrayW<::StringW> buttons)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Assets::OVR::Scripts::FixMethodDelegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, order, cat, msg, fix, target, editRequired, buttons);
}
