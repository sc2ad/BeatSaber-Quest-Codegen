#pragma once
#include "SFB/zzzz__IStandaloneFileBrowser_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "SFB/zzzz__ExtensionFilter_def.hpp"
//  Writing Method size for method: SFB::IStandaloneFileBrowser.OpenFilePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::ArrayW<SFB::ExtensionFilter>, bool)>(&SFB::IStandaloneFileBrowser::OpenFilePanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(SFB::IStandaloneFileBrowser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: SFB::IStandaloneFileBrowser.OpenFolderPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, bool)>(&SFB::IStandaloneFileBrowser::OpenFolderPanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(SFB::IStandaloneFileBrowser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: SFB::IStandaloneFileBrowser.SaveFilePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::StringW, ::ArrayW<SFB::ExtensionFilter>)>(&SFB::IStandaloneFileBrowser::SaveFilePanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(SFB::IStandaloneFileBrowser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: SFB::IStandaloneFileBrowser.OpenFilePanelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::ArrayW<SFB::ExtensionFilter>, bool, System::Action_1<::ArrayW<::StringW>>)>(&SFB::IStandaloneFileBrowser::OpenFilePanelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(SFB::IStandaloneFileBrowser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: SFB::IStandaloneFileBrowser.OpenFolderPanelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, bool, System::Action_1<::ArrayW<::StringW>>)>(&SFB::IStandaloneFileBrowser::OpenFolderPanelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(SFB::IStandaloneFileBrowser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: SFB::IStandaloneFileBrowser.SaveFilePanelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SFB::IStandaloneFileBrowser::*)(::StringW, ::StringW, ::StringW, ::ArrayW<SFB::ExtensionFilter>, System::Action_1<::StringW>)>(&SFB::IStandaloneFileBrowser::SaveFilePanelAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(SFB::IStandaloneFileBrowser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<::StringW> SFB::IStandaloneFileBrowser::OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<SFB::ExtensionFilter> extensions, bool multiselect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                            "OpenFilePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<SFB::ExtensionFilter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, title, directory, extensions, multiselect);
}
 ::ArrayW<::StringW> SFB::IStandaloneFileBrowser::OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                            "OpenFolderPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, title, directory, multiselect);
}
 ::StringW SFB::IStandaloneFileBrowser::SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<SFB::ExtensionFilter> extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                            "SaveFilePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<SFB::ExtensionFilter>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, title, directory, defaultName, extensions);
}
 void SFB::IStandaloneFileBrowser::OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<SFB::ExtensionFilter> extensions, bool multiselect, System::Action_1<::ArrayW<::StringW>> cb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                            "OpenFilePanelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<SFB::ExtensionFilter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::ArrayW<::StringW>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, title, directory, extensions, multiselect, cb);
}
 void SFB::IStandaloneFileBrowser::OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, System::Action_1<::ArrayW<::StringW>> cb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                            "OpenFolderPanelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::ArrayW<::StringW>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, title, directory, multiselect, cb);
}
 void SFB::IStandaloneFileBrowser::SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<SFB::ExtensionFilter> extensions, System::Action_1<::StringW> cb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SFB::IStandaloneFileBrowser>::get(),
                            "SaveFilePanelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<SFB::ExtensionFilter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, title, directory, defaultName, extensions, cb);
}
