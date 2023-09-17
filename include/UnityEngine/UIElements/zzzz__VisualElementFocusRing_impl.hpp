#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder  ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder::ChildOrder{0};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder  ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder::PositionXY{1};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder  ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder::PositionYX{2};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c43660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::__set_m_AutoIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::__get_m_AutoIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::__set_m_Focusable(::UnityEngine::UIElements::Focusable value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::Focusable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::Focusable>(value));
}
constexpr ::UnityEngine::UIElements::Focusable ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::__get_m_Focusable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::Focusable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::__set_m_IsSlot(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::__get_m_IsSlot() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::__set_m_ScopeNavigationOrder(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::__get_m_ScopeNavigationOrder() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElement, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder)>(&::UnityEngine::UIElements::VisualElementFocusRing::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c429bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.get_focusController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController (::UnityEngine::UIElements::VisualElementFocusRing::*)()>(&::UnityEngine::UIElements::VisualElementFocusRing::get_focusController)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c42a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "get_focusController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.get_defaultFocusOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder (::UnityEngine::UIElements::VisualElementFocusRing::*)()>(&::UnityEngine::UIElements::VisualElementFocusRing::get_defaultFocusOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c42a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "get_defaultFocusOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.set_defaultFocusOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder)>(&::UnityEngine::UIElements::VisualElementFocusRing::set_defaultFocusOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c42a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "set_defaultFocusOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.FocusRingAutoIndexSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord)>(&::UnityEngine::UIElements::VisualElementFocusRing::FocusRingAutoIndexSort)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x2c42a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "FocusRingAutoIndexSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.FocusRingSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord)>(&::UnityEngine::UIElements::VisualElementFocusRing::FocusRingSort)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2c42ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "FocusRingSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.DoUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)()>(&::UnityEngine::UIElements::VisualElementFocusRing::DoUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2c42fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "DoUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.BuildRingForScopeRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::VisualElement, ByRef<int32_t>, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>)>(&::UnityEngine::UIElements::VisualElementFocusRing::BuildRingForScopeRecursive)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2c430a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "BuildRingForScopeRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.SortAndFlattenScopeLists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementFocusRing::*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>)>(&::UnityEngine::UIElements::VisualElementFocusRing::SortAndFlattenScopeLists)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2c43398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "SortAndFlattenScopeLists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetFocusableInternalIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable)>(&::UnityEngine::UIElements::VisualElementFocusRing::GetFocusableInternalIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c43668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetFocusableInternalIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetFocusChangeDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable, ::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::VisualElementFocusRing::GetFocusChangeDirection)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2c43710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetFocusChangeDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetKeyDownFocusChangeDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection (*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::VisualElementFocusRing::GetKeyDownFocusChangeDirection)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2c4398c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetKeyDownFocusChangeDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetNextFocusable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable (::UnityEngine::UIElements::VisualElementFocusRing::*)(::UnityEngine::UIElements::Focusable, ::UnityEngine::UIElements::FocusChangeDirection)>(&::UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusable)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2c43b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetNextFocusable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetNextFocusableInTree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable (*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusableInTree)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c43f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetNextFocusableInTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFocusRing.GetPreviousFocusableInTree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable (*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::VisualElementFocusRing::GetPreviousFocusableInTree)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c4401c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetPreviousFocusableInTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::UIElements::IFocusRing
constexpr  ::UnityEngine::UIElements::VisualElementFocusRing::operator ::UnityEngine::UIElements::IFocusRing() const noexcept {
return ::UnityEngine::UIElements::IFocusRing(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::VisualElementFocusRing::__set_root(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::VisualElementFocusRing::__get_root() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::VisualElementFocusRing::__set__defaultFocusOrder_k__BackingField(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder>(value));
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder ::UnityEngine::UIElements::VisualElementFocusRing::__get__defaultFocusOrder_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::VisualElementFocusRing::__set_m_FocusRing(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> ::UnityEngine::UIElements::VisualElementFocusRing::__get_m_FocusRing() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "dfo", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder", modifiers: "", def_value: Some("0") }]
 ::UnityEngine::UIElements::VisualElementFocusRing::VisualElementFocusRing(::UnityEngine::UIElements::VisualElement root, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder dfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<VisualElementFocusRing>(root, dfo))) {}
/// @param dfo: ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder (default: 0)
 void ::UnityEngine::UIElements::VisualElementFocusRing::_ctor(::UnityEngine::UIElements::VisualElement root, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder dfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, root, dfo);
}
 ::UnityEngine::UIElements::FocusController ::UnityEngine::UIElements::VisualElementFocusRing::get_focusController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "get_focusController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder ::UnityEngine::UIElements::VisualElementFocusRing::get_defaultFocusOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "get_defaultFocusOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::VisualElementFocusRing::set_defaultFocusOrder(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "set_defaultFocusOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__DefaultFocusOrder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::UnityEngine::UIElements::VisualElementFocusRing::FocusRingAutoIndexSort(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord a, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "FocusRingAutoIndexSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
 int32_t ::UnityEngine::UIElements::VisualElementFocusRing::FocusRingSort(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord a, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "FocusRingSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
 void ::UnityEngine::UIElements::VisualElementFocusRing::DoUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "DoUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::VisualElementFocusRing::BuildRingForScopeRecursive(::UnityEngine::UIElements::VisualElement ve, ByRef<int32_t> scopeIndex, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> scopeList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "BuildRingForScopeRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, scopeIndex, scopeList);
}
 void ::UnityEngine::UIElements::VisualElementFocusRing::SortAndFlattenScopeLists(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord> rootScopeList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "SortAndFlattenScopeLists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElementFocusRing__FocusRingRecord>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rootScopeList);
}
 int32_t ::UnityEngine::UIElements::VisualElementFocusRing::GetFocusableInternalIndex(::UnityEngine::UIElements::Focusable f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetFocusableInternalIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, f);
}
 ::UnityEngine::UIElements::FocusChangeDirection ::UnityEngine::UIElements::VisualElementFocusRing::GetFocusChangeDirection(::UnityEngine::UIElements::Focusable currentFocusable, ::UnityEngine::UIElements::EventBase e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetFocusChangeDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection, false>(const_cast<void*>(instance), ___internal_method, currentFocusable, e);
}
 ::UnityEngine::UIElements::FocusChangeDirection ::UnityEngine::UIElements::VisualElementFocusRing::GetKeyDownFocusChangeDirection(::UnityEngine::UIElements::EventBase e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetKeyDownFocusChangeDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection, false>(nullptr, ___internal_method, e);
}
 ::UnityEngine::UIElements::Focusable ::UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusable(::UnityEngine::UIElements::Focusable currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetNextFocusable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable, false>(const_cast<void*>(instance), ___internal_method, currentFocusable, direction);
}
 ::UnityEngine::UIElements::Focusable ::UnityEngine::UIElements::VisualElementFocusRing::GetNextFocusableInTree(::UnityEngine::UIElements::VisualElement currentFocusable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetNextFocusableInTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable, false>(nullptr, ___internal_method, currentFocusable);
}
 ::UnityEngine::UIElements::Focusable ::UnityEngine::UIElements::VisualElementFocusRing::GetPreviousFocusableInTree(::UnityEngine::UIElements::VisualElement currentFocusable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFocusRing>::get(),
                            "GetPreviousFocusableInTree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable, false>(nullptr, ___internal_method, currentFocusable);
}
} // end anonymous namespace
