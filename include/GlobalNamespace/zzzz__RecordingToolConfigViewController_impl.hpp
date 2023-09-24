#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigViewController_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::RecordingToolConfigViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolConfigViewController::*)(bool, bool, bool)>(&GlobalNamespace::RecordingToolConfigViewController::DidActivate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x217ed98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::RecordingToolConfigViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolConfigViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolConfigViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolConfigViewController::*)()>(&GlobalNamespace::RecordingToolConfigViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217ee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolConfigViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RecordingToolConfigViewController::__set__textPageScrollView(HMUI::TextPageScrollView value)  {
::cordl_internals::setInstanceField<HMUI::TextPageScrollView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::TextPageScrollView>(value));
}
constexpr HMUI::TextPageScrollView GlobalNamespace::RecordingToolConfigViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<HMUI::TextPageScrollView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RecordingToolConfigViewController::__set__recordingToolManager(GlobalNamespace::RecordingToolManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RecordingToolManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RecordingToolManager>(value));
}
constexpr GlobalNamespace::RecordingToolManager GlobalNamespace::RecordingToolConfigViewController::__get__recordingToolManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RecordingToolManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::RecordingToolConfigViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolConfigViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 GlobalNamespace::RecordingToolConfigViewController GlobalNamespace::RecordingToolConfigViewController::New_ctor()  {
GlobalNamespace::RecordingToolConfigViewController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RecordingToolConfigViewController>())};
return o;
}
 void GlobalNamespace::RecordingToolConfigViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolConfigViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
