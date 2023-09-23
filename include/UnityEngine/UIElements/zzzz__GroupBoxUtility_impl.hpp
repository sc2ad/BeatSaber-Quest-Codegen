#pragma once
#include "UnityEngine/UIElements/zzzz__GroupBoxUtility_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::GroupBoxUtility.OnOptionAttachToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::AttachToPanelEvent)>(&UnityEngine::UIElements::GroupBoxUtility::OnOptionAttachToPanel)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2c8b240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "OnOptionAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GroupBoxUtility.OnOptionDetachFromPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::DetachFromPanelEvent)>(&UnityEngine::UIElements::GroupBoxUtility::OnOptionDetachFromPanel)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2c8b86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "OnOptionDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GroupBoxUtility.FindOrCreateGroupManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IGroupManager (*)(UnityEngine::UIElements::IGroupBox)>(&UnityEngine::UIElements::GroupBoxUtility::FindOrCreateGroupManager)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x2c8b48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "FindOrCreateGroupManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IGroupBox>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GroupBoxUtility.OnGroupBoxDetachedFromPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::DetachFromPanelEvent)>(&UnityEngine::UIElements::GroupBoxUtility::OnGroupBoxDetachedFromPanel)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c8ba20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "OnGroupBoxDetachedFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GroupBoxUtility.OnPanelDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::BaseVisualElementPanel)>(&UnityEngine::UIElements::GroupBoxUtility::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2c8bad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "OnPanelDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVisualElementPanel>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::GroupBoxUtility::__set_s_GroupManagers(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBox,UnityEngine::UIElements::IGroupManager> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBox,UnityEngine::UIElements::IGroupManager>, "s_GroupManagers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBox,UnityEngine::UIElements::IGroupManager>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBox,UnityEngine::UIElements::IGroupManager> UnityEngine::UIElements::GroupBoxUtility::__get_s_GroupManagers()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBox,UnityEngine::UIElements::IGroupManager>, "s_GroupManagers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get>();
}
 void UnityEngine::UIElements::GroupBoxUtility::__set_s_GroupOptionManagerCache(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBoxOption,UnityEngine::UIElements::IGroupManager> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBoxOption,UnityEngine::UIElements::IGroupManager>, "s_GroupOptionManagerCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBoxOption,UnityEngine::UIElements::IGroupManager>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBoxOption,UnityEngine::UIElements::IGroupManager> UnityEngine::UIElements::GroupBoxUtility::__get_s_GroupOptionManagerCache()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBoxOption,UnityEngine::UIElements::IGroupManager>, "s_GroupOptionManagerCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get>();
}
 void UnityEngine::UIElements::GroupBoxUtility::__set_k_GenericGroupBoxType(System::Type value)  {
::cordl_internals::setStaticField<System::Type, "k_GenericGroupBoxType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get>(std::forward<System::Type>(value));
}
 System::Type UnityEngine::UIElements::GroupBoxUtility::__get_k_GenericGroupBoxType()  {
return ::cordl_internals::getStaticField<System::Type, "k_GenericGroupBoxType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get>();
}
template<typename T>
 void UnityEngine::UIElements::GroupBoxUtility::RegisterGroupBoxOptionCallbacks(T option)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                        "RegisterGroupBoxOptionCallbacks",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, option);
}
template<typename T>
 void UnityEngine::UIElements::GroupBoxUtility::OnOptionSelected(T selectedOption)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                        "OnOptionSelected",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, selectedOption);
}
 void UnityEngine::UIElements::GroupBoxUtility::OnOptionAttachToPanel(UnityEngine::UIElements::AttachToPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "OnOptionAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt);
}
 void UnityEngine::UIElements::GroupBoxUtility::OnOptionDetachFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "OnOptionDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt);
}
 UnityEngine::UIElements::IGroupManager UnityEngine::UIElements::GroupBoxUtility::FindOrCreateGroupManager(UnityEngine::UIElements::IGroupBox groupBox)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "FindOrCreateGroupManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IGroupBox>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IGroupManager, false>(nullptr, ___internal_method, groupBox);
}
 void UnityEngine::UIElements::GroupBoxUtility::OnGroupBoxDetachedFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "OnGroupBoxDetachedFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt);
}
 void UnityEngine::UIElements::GroupBoxUtility::OnPanelDestroyed(UnityEngine::UIElements::BaseVisualElementPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GroupBoxUtility>::get(),
                            "OnPanelDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVisualElementPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, panel);
}
