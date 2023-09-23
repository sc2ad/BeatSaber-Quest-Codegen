#pragma once
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StartDragArgs.get_userData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::UIElements::StartDragArgs::*)()>(&UnityEngine::UIElements::StartDragArgs::get_userData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c910a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StartDragArgs>::get(),
                            "get_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StartDragArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StartDragArgs::*)(::StringW, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::UIElements::StartDragArgs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c90fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StartDragArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::StartDragArgs::__set__title_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::StartDragArgs::__get__title_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StartDragArgs::__set__userData_k__BackingField(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::UIElements::StartDragArgs::__get__userData_k__BackingField() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StartDragArgs::__set_m_GenericData(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable UnityEngine::UIElements::StartDragArgs::__get_m_GenericData() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::StartDragArgs::__set__unityObjectReferences_k__BackingField(System::Collections::Generic::IEnumerable_1<UnityEngine::Object> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<UnityEngine::Object>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<UnityEngine::Object>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<UnityEngine::Object> UnityEngine::UIElements::StartDragArgs::__get__unityObjectReferences_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<UnityEngine::Object>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::UIElements::StartDragArgs::get_userData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StartDragArgs>::get(),
                            "get_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "title", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userData", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 UnityEngine::UIElements::StartDragArgs::StartDragArgs(::StringW title, ::bs_hook::Il2CppWrapperType userData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<StartDragArgs>(title, userData))) {}
 void UnityEngine::UIElements::StartDragArgs::_ctor(::StringW title, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StartDragArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, title, userData);
}
