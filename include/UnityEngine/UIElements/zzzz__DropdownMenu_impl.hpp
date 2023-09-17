#pragma once
namespace {
#include "UnityEngine/UIElements/zzzz__DropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.MenuItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem> (::UnityEngine::UIElements::DropdownMenu::*)()>(&::UnityEngine::UIElements::DropdownMenu::MenuItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c8fd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu>::get(),
                            "MenuItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.AppendAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>, ::bs_hook::Il2CppWrapperType)>(&::UnityEngine::UIElements::DropdownMenu::AppendAction)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c8fd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu>::get(),
                            "AppendAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.InsertSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::StringW, int32_t)>(&::UnityEngine::UIElements::DropdownMenu::InsertSeparator)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2c8fe2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu>::get(),
                            "InsertSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenu.PrepareForDisplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenu::*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::DropdownMenu::PrepareForDisplay)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2c8ff6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu>::get(),
                            "PrepareForDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::DropdownMenu::__set_m_MenuItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem> ::UnityEngine::UIElements::DropdownMenu::__get_m_MenuItems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownMenu::__set_m_DropdownMenuEventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::DropdownMenuEventInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::DropdownMenuEventInfo>(value));
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo ::UnityEngine::UIElements::DropdownMenu::__get_m_DropdownMenuEventInfo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::DropdownMenuEventInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem> ::UnityEngine::UIElements::DropdownMenu::MenuItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu>::get(),
                            "MenuItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DropdownMenuItem>, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param userData: ::bs_hook::Il2CppWrapperType (default: csnull)
 void ::UnityEngine::UIElements::DropdownMenu::AppendAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction> action, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status> actionStatusCallback, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu>::get(),
                            "AppendAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, actionName, action, actionStatusCallback, userData);
}
 void ::UnityEngine::UIElements::DropdownMenu::InsertSeparator(::StringW subMenuPath, int32_t atIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu>::get(),
                            "InsertSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subMenuPath, atIndex);
}
 void ::UnityEngine::UIElements::DropdownMenu::PrepareForDisplay(::UnityEngine::UIElements::EventBase e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenu>::get(),
                            "PrepareForDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
} // end anonymous namespace
