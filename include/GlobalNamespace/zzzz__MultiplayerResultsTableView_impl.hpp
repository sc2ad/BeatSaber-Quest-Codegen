#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerResultsTableView_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsTableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218dfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0._StartAnimation_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::_StartAnimation_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x218e1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0>::get(),
                            "<StartAnimation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0._StartAnimation_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::*)(float_t)>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::_StartAnimation_b__2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x218e1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0>::get(),
                            "<StartAnimation>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::__set_rectTransform(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::__get_rectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::__set_cell(::GlobalNamespace::MultiplayerResultsTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsTableCell, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerResultsTableCell>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsTableCell ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::__get_cell() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsTableCell, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::_StartAnimation_b__0(::UnityEngine::Vector2 val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0>::get(),
                            "<StartAnimation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, val);
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0::_StartAnimation_b__2(float_t val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_0>::get(),
                            "<StartAnimation>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, val);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218dfdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1._StartAnimation_b__3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::_StartAnimation_b__3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x218e1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1>::get(),
                            "<StartAnimation>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::__set_winnerRectTransform(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::__get_winnerRectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1::_StartAnimation_b__3(::UnityEngine::Vector2 val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView____c__DisplayClass30_1>::get(),
                            "<StartAnimation>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, val);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x218e05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x218e1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::MoveNext)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x218e1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218e2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x218e2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218e338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::operator ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__set_delay(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get_delay() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__set___4__this(::GlobalNamespace::MultiplayerResultsTableView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsTableView, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerResultsTableView>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsTableView ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsTableView, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayRandomRowSlideInSound_d__31>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x218e0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x218e340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::MoveNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x218e344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218e408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x218e410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::*)()>(&::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218e450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::operator ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__set_delay(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get_delay() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__set___4__this(::GlobalNamespace::MultiplayerResultsTableView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsTableView, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerResultsTableView>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsTableView ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsTableView, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplayerResultsTableView___PlayAvatarSlideInSound_d__32>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.CellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218cd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x218cd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x218cde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::OnDestroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x218ce44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.CellForIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell (::GlobalNamespace::MultiplayerResultsTableView::*)(::HMUI::TableView, int32_t)>(&::GlobalNamespace::MultiplayerResultsTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x218cecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>)>(&::GlobalNamespace::MultiplayerResultsTableView::SetData)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x218d324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.StartAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::StartAnimation)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x218d5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "StartAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.PlayRandomRowSlideInSound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::MultiplayerResultsTableView::*)(float_t)>(&::GlobalNamespace::MultiplayerResultsTableView::PlayRandomRowSlideInSound)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x218dfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "PlayRandomRowSlideInSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView.PlayAvatarSlideInSound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::MultiplayerResultsTableView::*)(float_t)>(&::GlobalNamespace::MultiplayerResultsTableView::PlayAvatarSlideInSound)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x218e084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "PlayAvatarSlideInSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x218e124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView._StartAnimation_b__30_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x218e140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "<StartAnimation>b__30_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView._StartAnimation_b__30_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)()>(&::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_4)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x218e168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "<StartAnimation>b__30_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableView._StartAnimation_b__30_5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableView::*)(float_t)>(&::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_5)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x218e190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "<StartAnimation>b__30_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HMUI::____HMUI__TableView__IDataSource
constexpr  ::GlobalNamespace::MultiplayerResultsTableView::operator ::HMUI::____HMUI__TableView__IDataSource() const noexcept {
return ::HMUI::____HMUI__TableView__IDataSource(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__tableView(::HMUI::TableView value)  {
::cordl_internals::setInstanceField<::HMUI::TableView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::TableView>(value));
}
constexpr ::HMUI::TableView ::GlobalNamespace::MultiplayerResultsTableView::__get__tableView() const {
return ::cordl_internals::getInstanceField<::HMUI::TableView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__tableViewRectTransform(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::GlobalNamespace::MultiplayerResultsTableView::__get__tableViewRectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__winnerTableCell(::GlobalNamespace::MultiplayerResultsTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsTableCell, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerResultsTableCell>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsTableCell ::GlobalNamespace::MultiplayerResultsTableView::__get__winnerTableCell() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsTableCell, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__cellPrefab(::GlobalNamespace::MultiplayerResultsTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsTableCell, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerResultsTableCell>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsTableCell ::GlobalNamespace::MultiplayerResultsTableView::__get__cellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsTableCell, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__startRowXPosition(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerResultsTableView::__get__startRowXPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__rowHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerResultsTableView::__get__rowHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__rowXOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerResultsTableView::__get__rowXOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__animationDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerResultsTableView::__get__animationDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__animationSeparationTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerResultsTableView::__get__animationSeparationTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__winnerAnimationDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerResultsTableView::__get__winnerAnimationDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__duelTablePosXOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerResultsTableView::__get__duelTablePosXOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__multiplayerOffsetByLocalPlayerPosition(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>(value));
}
constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition ::GlobalNamespace::MultiplayerResultsTableView::__get__multiplayerOffsetByLocalPlayerPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__outroSfxAudioSource(::UnityEngine::AudioSource value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AudioSource>(value));
}
constexpr ::UnityEngine::AudioSource ::GlobalNamespace::MultiplayerResultsTableView::__get__outroSfxAudioSource() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__rowSlideAudioClips(::ArrayW<::UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::AudioClip>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::AudioClip>>(value));
}
constexpr ::ArrayW<::UnityEngine::AudioClip> ::GlobalNamespace::MultiplayerResultsTableView::__get__rowSlideAudioClips() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__avatarSlideAudioClip(::UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AudioClip>(value));
}
constexpr ::UnityEngine::AudioClip ::GlobalNamespace::MultiplayerResultsTableView::__get__avatarSlideAudioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__tweeningManager(::Tweening::TimeTweeningManager value)  {
::cordl_internals::setInstanceField<::Tweening::TimeTweeningManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Tweening::TimeTweeningManager>(value));
}
constexpr ::Tweening::TimeTweeningManager ::GlobalNamespace::MultiplayerResultsTableView::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLayoutProvider, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerLayoutProvider>(value));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider ::GlobalNamespace::MultiplayerResultsTableView::__get__layoutProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLayoutProvider, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__container(::Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::DiContainer>(value));
}
constexpr ::Zenject::DiContainer ::GlobalNamespace::MultiplayerResultsTableView::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__dataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> ::GlobalNamespace::MultiplayerResultsTableView::__get__dataList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__positionOffset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::MultiplayerResultsTableView::__get__positionOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__rotationOffset(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::MultiplayerResultsTableView::__get__rotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__lastParentPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::MultiplayerResultsTableView::__get__lastParentPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableView::__set__lastParentRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::MultiplayerResultsTableView::__get__lastParentRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::MultiplayerResultsTableView::CellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::MultiplayerResultsTableView::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerResultsTableView::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerResultsTableView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HMUI::TableCell ::GlobalNamespace::MultiplayerResultsTableView::CellForIdx(::HMUI::TableView tableView, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell, false>(const_cast<void*>(instance), ___internal_method, tableView, idx);
}
 void ::GlobalNamespace::MultiplayerResultsTableView::SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> dataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataList);
}
 float_t ::GlobalNamespace::MultiplayerResultsTableView::StartAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "StartAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::MultiplayerResultsTableView::PlayRandomRowSlideInSound(float_t delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "PlayRandomRowSlideInSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, delay);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::MultiplayerResultsTableView::PlayAvatarSlideInSound(float_t delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "PlayAvatarSlideInSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, delay);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerResultsTableView::MultiplayerResultsTableView()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerResultsTableView>())) {}
 void ::GlobalNamespace::MultiplayerResultsTableView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "<StartAnimation>b__30_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "<StartAnimation>b__30_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerResultsTableView::_StartAnimation_b__30_5(float_t val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableView>::get(),
                            "<StartAnimation>b__30_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, val);
}
} // end anonymous namespace
