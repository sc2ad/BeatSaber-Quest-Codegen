#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__RecordingToolLoggingViewController_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolLoggingViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolLoggingViewController::*)(bool, bool, bool)>(&::GlobalNamespace::RecordingToolLoggingViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x217ee2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::RecordingToolLoggingViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolLoggingViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolLoggingViewController::*)()>(&::GlobalNamespace::RecordingToolLoggingViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217eed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::RecordingToolLoggingViewController::__set__textPageScrollView(::HMUI::TextPageScrollView value)  {
::cordl_internals::setInstanceField<::HMUI::TextPageScrollView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::TextPageScrollView>(value));
}
constexpr ::HMUI::TextPageScrollView ::GlobalNamespace::RecordingToolLoggingViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolLoggingViewController::__set__recordingToolManager(::GlobalNamespace::RecordingToolManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::RecordingToolManager>(value));
}
constexpr ::GlobalNamespace::RecordingToolManager ::GlobalNamespace::RecordingToolLoggingViewController::__get__recordingToolManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::RecordingToolLoggingViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Ctor Parameters []
 ::GlobalNamespace::RecordingToolLoggingViewController::RecordingToolLoggingViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<RecordingToolLoggingViewController>())) {}
 void ::GlobalNamespace::RecordingToolLoggingViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolLoggingViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
