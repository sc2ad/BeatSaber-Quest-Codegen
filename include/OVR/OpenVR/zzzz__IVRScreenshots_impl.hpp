#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRScreenshots_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotPropertyFilenames_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotError_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__EVRScreenshotType_def.hpp"
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x265e9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::*)(ByRef<uint32_t>, OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265eac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::*)(ByRef<uint32_t>, OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x265eadc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::*)(ByRef<uint32_t>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x265eba8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::OVR__OpenVR__IVRScreenshots___RequestScreenshot(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRScreenshots___RequestScreenshot>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::Invoke(ByRef<uint32_t> pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::BeginInvoke(ByRef<uint32_t> pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot::EndInvoke(ByRef<uint32_t> pOutScreenshotHandle, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, pOutScreenshotHandle, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x265ebd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::*)(ByRef<::ArrayW<OVR::OpenVR::EVRScreenshotType>>, int32_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265ecac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::*)(ByRef<::ArrayW<OVR::OpenVR::EVRScreenshotType>>, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x265ecc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265ed54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::OVR__OpenVR__IVRScreenshots___HookScreenshot(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRScreenshots___HookScreenshot>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::Invoke(ByRef<::ArrayW<OVR::OpenVR::EVRScreenshotType>> pSupportedTypes, int32_t numTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::EVRScreenshotType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, pSupportedTypes, numTypes);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::EVRScreenshotType>> pSupportedTypes, int32_t numTypes, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<OVR::OpenVR::EVRScreenshotType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pSupportedTypes, numTypes, callback, object);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265ed7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotType (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::*)(uint32_t, ByRef<OVR::OpenVR::EVRScreenshotError>)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265ee40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::*)(uint32_t, ByRef<OVR::OpenVR::EVRScreenshotError>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x265ee54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotType (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::*)(ByRef<OVR::OpenVR::EVRScreenshotError>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x265ef0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRScreenshotType OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::Invoke(uint32_t screenshotHandle, ByRef<OVR::OpenVR::EVRScreenshotError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotType, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, pError);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::BeginInvoke(uint32_t screenshotHandle, ByRef<OVR::OpenVR::EVRScreenshotError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, pError, callback, object);
}
 OVR::OpenVR::EVRScreenshotType OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType::EndInvoke(ByRef<OVR::OpenVR::EVRScreenshotError> pError, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotType, false>(const_cast<void*>(instance), ___internal_method, pError, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265ef38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::*)(uint32_t, OVR::OpenVR::EVRScreenshotPropertyFilenames, System::Text::StringBuilder, uint32_t, ByRef<OVR::OpenVR::EVRScreenshotError>)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265effc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::*)(uint32_t, OVR::OpenVR::EVRScreenshotPropertyFilenames, System::Text::StringBuilder, uint32_t, ByRef<OVR::OpenVR::EVRScreenshotError>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x265f010;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::*)(ByRef<OVR::OpenVR::EVRScreenshotError>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x265f114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::Invoke(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder pchFilename, uint32_t cchFilename, ByRef<OVR::OpenVR::EVRScreenshotError> pError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotPropertyFilenames>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::BeginInvoke(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder pchFilename, uint32_t cchFilename, ByRef<OVR::OpenVR::EVRScreenshotError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotPropertyFilenames>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, filenameType, pchFilename, cchFilename, pError, callback, object);
}
 uint32_t OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename::EndInvoke(ByRef<OVR::OpenVR::EVRScreenshotError> pError, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::EVRScreenshotError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pError, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265f140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::*)(uint32_t, float_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265f204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::*)(uint32_t, float_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x265f218;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265f2d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::Invoke(uint32_t screenshotHandle, float_t flProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, flProgress);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::BeginInvoke(uint32_t screenshotHandle, float_t flProgress, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, flProgress, callback, object);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x265f2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::*)(ByRef<uint32_t>, ::StringW, ::StringW)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265f3d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::*)(ByRef<uint32_t>, ::StringW, ::StringW, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x265f3e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::*)(ByRef<uint32_t>, System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x265f484;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::Invoke(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::BeginInvoke(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pOutScreenshotHandle, pchPreviewFilename, pchVRFilename, callback, object);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot::EndInvoke(ByRef<uint32_t> pOutScreenshotHandle, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, pOutScreenshotHandle, result);
}
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x265f4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::*)(uint32_t, OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x265f574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::*)(uint32_t, OVR::OpenVR::EVRScreenshotType, ::StringW, ::StringW, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x265f588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::*)(System::IAsyncResult)>(&OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x265f650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::OVR__OpenVR__IVRScreenshots___SubmitScreenshot(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OVR__OpenVR__IVRScreenshots___SubmitScreenshot>(object, method))) {}
 void OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::Invoke(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename);
}
 System::IAsyncResult OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::BeginInvoke(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename, callback, object);
}
 OVR::OpenVR::EVRScreenshotError OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRScreenshotError, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "RequestScreenshot", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot", modifiers: "", def_value: Some("csnull") }, CppParam { name: "HookScreenshot", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetScreenshotPropertyType", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetScreenshotPropertyFilename", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename", modifiers: "", def_value: Some("csnull") }, CppParam { name: "UpdateScreenshotProgress", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress", modifiers: "", def_value: Some("csnull") }, CppParam { name: "TakeStereoScreenshot", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SubmitScreenshot", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot", modifiers: "", def_value: Some("csnull") }]
constexpr OVR::OpenVR::IVRScreenshots::IVRScreenshots(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot RequestScreenshot, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot HookScreenshot, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType GetScreenshotPropertyType, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename GetScreenshotPropertyFilename, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress UpdateScreenshotProgress, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot TakeStereoScreenshot, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot SubmitScreenshot) noexcept : ::bs_hook::ValueTypeWrapper() {this->RequestScreenshot = RequestScreenshot;
this->HookScreenshot = HookScreenshot;
this->GetScreenshotPropertyType = GetScreenshotPropertyType;
this->GetScreenshotPropertyFilename = GetScreenshotPropertyFilename;
this->UpdateScreenshotProgress = UpdateScreenshotProgress;
this->TakeStereoScreenshot = TakeStereoScreenshot;
this->SubmitScreenshot = SubmitScreenshot;
}
constexpr void OVR::OpenVR::IVRScreenshots::__set_RequestScreenshot(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot, 0x0>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot OVR::OpenVR::IVRScreenshots::__get_RequestScreenshot() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::IVRScreenshots::__set_HookScreenshot(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot, 0x8>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot OVR::OpenVR::IVRScreenshots::__get_HookScreenshot() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::IVRScreenshots::__set_GetScreenshotPropertyType(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType, 0x10>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType OVR::OpenVR::IVRScreenshots::__get_GetScreenshotPropertyType() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::IVRScreenshots::__set_GetScreenshotPropertyFilename(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename, 0x18>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename OVR::OpenVR::IVRScreenshots::__get_GetScreenshotPropertyFilename() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename, 0x18>(this->__instance);
}
constexpr void OVR::OpenVR::IVRScreenshots::__set_UpdateScreenshotProgress(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress, 0x20>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress OVR::OpenVR::IVRScreenshots::__get_UpdateScreenshotProgress() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress, 0x20>(this->__instance);
}
constexpr void OVR::OpenVR::IVRScreenshots::__set_TakeStereoScreenshot(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot, 0x28>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot OVR::OpenVR::IVRScreenshots::__get_TakeStereoScreenshot() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot, 0x28>(this->__instance);
}
constexpr void OVR::OpenVR::IVRScreenshots::__set_SubmitScreenshot(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot, 0x30>(this->__instance, std::forward<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot>(value));
}
constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot OVR::OpenVR::IVRScreenshots::__get_SubmitScreenshot() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot, 0x30>(this->__instance);
}
