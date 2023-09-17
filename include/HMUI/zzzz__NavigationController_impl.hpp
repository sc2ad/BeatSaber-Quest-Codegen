#pragma once
#include "HMUI/zzzz__ContainerViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::____HMUI__NavigationController__Orientation::____HMUI__NavigationController__Orientation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HMUI::____HMUI__NavigationController__Orientation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HMUI::____HMUI__NavigationController__Orientation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HMUI::____HMUI__NavigationController__Orientation  ::HMUI::____HMUI__NavigationController__Orientation::Horizontal{0};
constexpr ::HMUI::____HMUI__NavigationController__Orientation  ::HMUI::____HMUI__NavigationController__Orientation::Vertical{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::____HMUI__NavigationController__Alignment::____HMUI__NavigationController__Alignment(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HMUI::____HMUI__NavigationController__Alignment::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HMUI::____HMUI__NavigationController__Alignment::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HMUI::____HMUI__NavigationController__Alignment  ::HMUI::____HMUI__NavigationController__Alignment::Beginning{0};
constexpr ::HMUI::____HMUI__NavigationController__Alignment  ::HMUI::____HMUI__NavigationController__Alignment::Middle{1};
constexpr ::HMUI::____HMUI__NavigationController__Alignment  ::HMUI::____HMUI__NavigationController__Alignment::End{2};
//  Writing Method size for method: ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::*)()>(&::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb7ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__NavigationController____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0._PushViewController_g__AnimationLayouter_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::*)(float_t, ::ArrayW<::HMUI::ViewController>)>(&::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::_PushViewController_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1fb7cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__NavigationController____c__DisplayClass8_0>::get(),
                            "<PushViewController>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::__set_startPositions(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::__get_startPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::__set___4__this(::HMUI::NavigationController value)  {
::cordl_internals::setInstanceField<::HMUI::NavigationController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::NavigationController>(value));
}
constexpr ::HMUI::NavigationController ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::__set_viewController(::HMUI::ViewController value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ViewController>(value));
}
constexpr ::HMUI::ViewController ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::__get_viewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::__set_endPositions(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::__get_endPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::____HMUI__NavigationController____c__DisplayClass8_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____HMUI__NavigationController____c__DisplayClass8_0>())) {}
 void ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__NavigationController____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::____HMUI__NavigationController____c__DisplayClass8_0::_PushViewController_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController> viewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__NavigationController____c__DisplayClass8_0>::get(),
                            "<PushViewController>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t, viewControllers);
}
//  Writing Method size for method: ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::*)()>(&::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb7f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__NavigationController____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0._PopViewControllers_g__AnimationLayouter_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::*)(float_t, ::ArrayW<::HMUI::ViewController>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController>)>(&::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::_PopViewControllers_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x1fb7f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__NavigationController____c__DisplayClass10_0>::get(),
                            "<PopViewControllers>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::__set_startPositions(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::__get_startPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::__set___4__this(::HMUI::NavigationController value)  {
::cordl_internals::setInstanceField<::HMUI::NavigationController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::NavigationController>(value));
}
constexpr ::HMUI::NavigationController ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::NavigationController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::__set_endPositions(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::__get_endPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::__set_moveOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::__get_moveOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::____HMUI__NavigationController____c__DisplayClass10_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____HMUI__NavigationController____c__DisplayClass10_0>())) {}
 void ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__NavigationController____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::____HMUI__NavigationController____c__DisplayClass10_0::_PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController> viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController> removingViewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__NavigationController____c__DisplayClass10_0>::get(),
                            "<PopViewControllers>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t, viewControllers, removingViewControllers);
}
//  Writing Method size for method: ::HMUI::NavigationController.LayoutViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::System::Collections::Generic::List_1<::HMUI::ViewController>)>(&::HMUI::NavigationController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1fb6640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::NavigationController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PushViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::HMUI::ViewController, ::System::Action, bool)>(&::HMUI::NavigationController::PushViewController)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1fb521c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "PushViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PopViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::System::Action, bool)>(&::HMUI::NavigationController::PopViewController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1fb5458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "PopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PopViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(int32_t, ::System::Action, bool)>(&::HMUI::NavigationController::PopViewControllers)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x1fb55a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "PopViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PositionVector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HMUI::NavigationController::*)(float_t)>(&::HMUI::NavigationController::PositionVector)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fb6c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "PositionVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.SetupViewControllerRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::HMUI::ViewController)>(&::HMUI::NavigationController::SetupViewControllerRect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1fb6c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "SetupViewControllerRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.GetNewPositionsForViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t> (::HMUI::NavigationController::*)(::System::Collections::Generic::List_1<::HMUI::ViewController>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController>, float_t)>(&::HMUI::NavigationController::GetNewPositionsForViewControllers)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x1fb6758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "GetNewPositionsForViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HMUI::ViewController>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)()>(&::HMUI::NavigationController::_ctor)> {
  constexpr static std::size_t size = 0x100c;
  constexpr static std::size_t addrs = 0x1fb6c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::NavigationController::__set__orientation(::HMUI::____HMUI__NavigationController__Orientation value)  {
::cordl_internals::setInstanceField<::HMUI::____HMUI__NavigationController__Orientation, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::____HMUI__NavigationController__Orientation>(value));
}
constexpr ::HMUI::____HMUI__NavigationController__Orientation ::HMUI::NavigationController::__get__orientation() const {
return ::cordl_internals::getInstanceField<::HMUI::____HMUI__NavigationController__Orientation, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::NavigationController::__set__reversedStacking(bool value)  {
::cordl_internals::setInstanceField<bool, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HMUI::NavigationController::__get__reversedStacking() const {
return ::cordl_internals::getInstanceField<bool, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::NavigationController::__set__alignment(::HMUI::____HMUI__NavigationController__Alignment value)  {
::cordl_internals::setInstanceField<::HMUI::____HMUI__NavigationController__Alignment, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::____HMUI__NavigationController__Alignment>(value));
}
constexpr ::HMUI::____HMUI__NavigationController__Alignment ::HMUI::NavigationController::__get__alignment() const {
return ::cordl_internals::getInstanceField<::HMUI::____HMUI__NavigationController__Alignment, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::NavigationController::__set__edgeSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HMUI::NavigationController::__get__edgeSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::NavigationController::__set__viewControllersSeparator(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HMUI::NavigationController::__get__viewControllersSeparator() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::HMUI::NavigationController::LayoutViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController> viewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "LayoutViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HMUI::ViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewControllers);
}
/// @param immediately: bool (default: false)
 void ::HMUI::NavigationController::PushViewController(::HMUI::ViewController viewController, ::System::Action finishedCallback, bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "PushViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, finishedCallback, immediately);
}
 void ::HMUI::NavigationController::PopViewController(::System::Action finishedCallback, bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "PopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, finishedCallback, immediately);
}
 void ::HMUI::NavigationController::PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action finishedCallback, bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "PopViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numberOfViewControllersToPop, finishedCallback, immediately);
}
 ::UnityEngine::Vector3 ::HMUI::NavigationController::PositionVector(float_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "PositionVector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 void ::HMUI::NavigationController::SetupViewControllerRect(::HMUI::ViewController viewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "SetupViewControllerRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController);
}
/// @param fixedViewControllers: ::System::Collections::Generic::HashSet_1<::HMUI::ViewController> (default: csnull)
/// @param fixedEndPos: float_t (default: 0)
 ::ArrayW<float_t> ::HMUI::NavigationController::GetNewPositionsForViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController> viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController> fixedViewControllers, float_t fixedEndPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            "GetNewPositionsForViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HMUI::ViewController>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(const_cast<void*>(instance), ___internal_method, viewControllers, fixedViewControllers, fixedEndPos);
}
// Ctor Parameters []
 ::HMUI::NavigationController::NavigationController()  : ::HMUI::ContainerViewController(THROW_UNLESS(::il2cpp_utils::New<NavigationController>())) {}
 void ::HMUI::NavigationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
