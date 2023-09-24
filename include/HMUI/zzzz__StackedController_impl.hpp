#pragma once
#include "HMUI/zzzz__ContainerViewController_impl.hpp"
#include "HMUI/zzzz__StackedController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "HMUI/zzzz__StackedController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: HMUI::HMUI__StackedController____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HMUI__StackedController____c__DisplayClass5_0::*)()>(&HMUI::HMUI__StackedController____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb9428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__StackedController____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::HMUI__StackedController____c__DisplayClass5_0._PopViewControllers_g__AnimationLayouter_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HMUI__StackedController____c__DisplayClass5_0::*)(float_t, ::ArrayW<HMUI::ViewController>, System::Collections::Generic::HashSet_1<HMUI::ViewController>)>(&HMUI::HMUI__StackedController____c__DisplayClass5_0::_PopViewControllers_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1fb9564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__StackedController____c__DisplayClass5_0>::get(),
                            "<PopViewControllers>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<HMUI::ViewController>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<HMUI::ViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::HMUI__StackedController____c__DisplayClass5_0::__set_numberOfViewControllersToPop(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::HMUI__StackedController____c__DisplayClass5_0::__get_numberOfViewControllersToPop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::HMUI__StackedController____c__DisplayClass5_0 HMUI::HMUI__StackedController____c__DisplayClass5_0::New_ctor()  {
HMUI::HMUI__StackedController____c__DisplayClass5_0 o{THROW_UNLESS(::il2cpp_utils::New<HMUI::HMUI__StackedController____c__DisplayClass5_0>())};
return o;
}
 void HMUI::HMUI__StackedController____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__StackedController____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::HMUI__StackedController____c__DisplayClass5_0::_PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<HMUI::ViewController> viewControllers, System::Collections::Generic::HashSet_1<HMUI::ViewController> removingViewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__StackedController____c__DisplayClass5_0>::get(),
                            "<PopViewControllers>g__AnimationLayouter|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<HMUI::ViewController>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<HMUI::ViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t, viewControllers, removingViewControllers);
}
//  Writing Method size for method: HMUI::StackedController.get_topStackedViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController (HMUI::StackedController::*)()>(&HMUI::StackedController::get_topStackedViewController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1fb9008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "get_topStackedViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::StackedController.LayoutViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)(System::Collections::Generic::List_1<HMUI::ViewController>)>(&HMUI::StackedController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1fb9080;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::StackedController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::StackedController.PushViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)(HMUI::ViewController, System::Action, bool)>(&HMUI::StackedController::PushViewController)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1fb91b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "PushViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::StackedController.PopViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)(System::Action, bool)>(&HMUI::StackedController::PopViewController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1fb9260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "PopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::StackedController.PopViewControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)(int32_t, System::Action, bool)>(&HMUI::StackedController::PopViewControllers)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1fb9274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "PopViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::StackedController.SetupViewControllerRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HMUI::ViewController, int32_t)>(&HMUI::StackedController::SetupViewControllerRect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1fb9168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "SetupViewControllerRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::StackedController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)()>(&HMUI::StackedController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb94c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::StackedController._PushViewController_g__AnimationLayouter_3_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ::ArrayW<HMUI::ViewController>)>(&HMUI::StackedController::_PushViewController_g__AnimationLayouter_3_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fb94cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "<PushViewController>g__AnimationLayouter|3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<HMUI::ViewController>>::get()}
                        )));
    return ___internal_method;
  }
};
 HMUI::ViewController HMUI::StackedController::get_topStackedViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "get_topStackedViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::ViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::StackedController::LayoutViewControllers(System::Collections::Generic::List_1<HMUI::ViewController> viewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "LayoutViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HMUI::ViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewControllers);
}
/// @param immediately: bool (default: false)
 void HMUI::StackedController::PushViewController(HMUI::ViewController viewController, System::Action finishedCallback, bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "PushViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, viewController, finishedCallback, immediately);
}
/// @param finishedCallback: System::Action (default: csnull)
/// @param immediately: bool (default: false)
 void HMUI::StackedController::PopViewController(System::Action finishedCallback, bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "PopViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, finishedCallback, immediately);
}
/// @param finishedCallback: System::Action (default: csnull)
/// @param immediately: bool (default: false)
 void HMUI::StackedController::PopViewControllers(int32_t numberOfViewControllersToPop, System::Action finishedCallback, bool immediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "PopViewControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numberOfViewControllersToPop, finishedCallback, immediately);
}
 void HMUI::StackedController::SetupViewControllerRect(HMUI::ViewController viewController, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "SetupViewControllerRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewController, index);
}
 HMUI::StackedController HMUI::StackedController::New_ctor()  {
HMUI::StackedController o{THROW_UNLESS(::il2cpp_utils::New<HMUI::StackedController>())};
return o;
}
 void HMUI::StackedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::StackedController::_PushViewController_g__AnimationLayouter_3_0(float_t t, ::ArrayW<HMUI::ViewController> viewControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::StackedController>::get(),
                            "<PushViewController>g__AnimationLayouter|3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<HMUI::ViewController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, viewControllers);
}
