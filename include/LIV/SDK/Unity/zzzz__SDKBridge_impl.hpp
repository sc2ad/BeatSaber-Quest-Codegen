#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKBridge_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKApplicationOutput_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTexture_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPlane_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: Some("csnull") }, CppParam { name: "data", ty: "T", modifiers: "", def_value: Some("csnull") }]
constexpr LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1::LIV__SDK__Unity__SDKBridge__SDKInjection_1(bool active, System::Action action, T data) noexcept : ::bs_hook::ValueTypeWrapper() {this->active = active;
this->action = action;
this->data = data;
}
constexpr void LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1::__set_active(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1::__get_active() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1::__set_action(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x8>(this->__instance, std::forward<System::Action>(value));
}
constexpr System::Action LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action, 0x8>(this->__instance);
}
constexpr void LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1::__set_data(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->__instance, std::forward<T>(value));
}
constexpr T LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1::__get_data() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->__instance);
}
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.AddStringToChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::cordl_internals::intptr_t, int32_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddStringToChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209c29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddStringToChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.addtexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::addtexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209c2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "addtexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetObjectTimeStamp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::cordl_internals::intptr_t)>(&LIV::SDK::Unity::SDKBridge::GetObjectTimeStamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209c2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetObjectTimeStamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetCurrentTimeTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&LIV::SDK::Unity::SDKBridge::GetCurrentTimeTicks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209c2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetCurrentTimeTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetIsCaptureActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&LIV::SDK::Unity::SDKBridge::GetIsCaptureActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209c2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetIsCaptureActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetRenderEventFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)()>(&LIV::SDK::Unity::SDKBridge::GetRenderEventFunc)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x209c2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetRenderEventFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetCompositorChannelObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(int32_t, uint64_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::GetCompositorChannelObject)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x209c30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetCompositorChannelObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.AddObjectToCompositorChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::cordl_internals::intptr_t, int32_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddObjectToCompositorChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209c354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddObjectToCompositorChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.AddObjectToFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, int32_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddObjectToFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209c35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddObjectToFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.updatinputframe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::cordl_internals::intptr_t)>(&LIV::SDK::Unity::SDKBridge::updatinputframe)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x209c364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "updatinputframe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetViewportTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)()>(&LIV::SDK::Unity::SDKBridge::GetViewportTexture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x209c3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetViewportTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetChannelObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(int32_t, uint64_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::GetChannelObject)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x209c3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetChannelObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.AddObjectToChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::cordl_internals::intptr_t, int32_t, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddObjectToChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209c43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddObjectToChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.Tag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&LIV::SDK::Unity::SDKBridge::Tag)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x209c444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "Tag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.AddString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, int32_t)>(&LIV::SDK::Unity::SDKBridge::AddString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x209c4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.AddTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LIV::SDK::Unity::SDKTexture, uint64_t)>(&LIV::SDK::Unity::SDKBridge::AddTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x209c5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetObjectTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::cordl_internals::intptr_t)>(&LIV::SDK::Unity::SDKBridge::GetObjectTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x209c684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetObjectTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetCurrentTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&LIV::SDK::Unity::SDKBridge::GetCurrentTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x209c6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetCurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.get_IsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&LIV::SDK::Unity::SDKBridge::get_IsActive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x209b4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "get_IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.IssuePluginEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKBridge::IssuePluginEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x209c73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "IssuePluginEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.SubmitApplicationOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LIV::SDK::Unity::SDKApplicationOutput)>(&LIV::SDK::Unity::SDKBridge::SubmitApplicationOutput)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x209bcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "SubmitApplicationOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKApplicationOutput>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.UpdateInputFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<LIV::SDK::Unity::SDKInputFrame>)>(&LIV::SDK::Unity::SDKBridge::UpdateInputFrame)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x209c7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "UpdateInputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<LIV::SDK::Unity::SDKInputFrame>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetViewfinderTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKTexture (*)()>(&LIV::SDK::Unity::SDKBridge::GetViewfinderTexture)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x209cbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetViewfinderTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.AddTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LIV::SDK::Unity::SDKTexture)>(&LIV::SDK::Unity::SDKBridge::AddTexture)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x209ce20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.CreateFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LIV::SDK::Unity::SDKOutputFrame)>(&LIV::SDK::Unity::SDKBridge::CreateFrame)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x209cf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "CreateFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKOutputFrame>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.SetGroundPlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(LIV::SDK::Unity::SDKPlane)>(&LIV::SDK::Unity::SDKBridge::SetGroundPlane)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x209d0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "SetGroundPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKPlane>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKBridge.GetResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<LIV::SDK::Unity::SDKResolution>)>(&LIV::SDK::Unity::SDKBridge::GetResolution)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x209d158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<LIV::SDK::Unity::SDKResolution>>::get()}
                        )));
    return ___internal_method;
  }
};
 void LIV::SDK::Unity::SDKBridge::__set__injection_SDKInputFrame(LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKInputFrame> value)  {
::cordl_internals::setStaticField<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKInputFrame>, "_injection_SDKInputFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>(std::forward<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKInputFrame>>(value));
}
 LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKInputFrame> LIV::SDK::Unity::SDKBridge::__get__injection_SDKInputFrame()  {
return ::cordl_internals::getStaticField<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKInputFrame>, "_injection_SDKInputFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>();
}
 void LIV::SDK::Unity::SDKBridge::__set__injection_SDKResolution(LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKResolution> value)  {
::cordl_internals::setStaticField<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKResolution>, "_injection_SDKResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>(std::forward<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKResolution>>(value));
}
 LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKResolution> LIV::SDK::Unity::SDKBridge::__get__injection_SDKResolution()  {
return ::cordl_internals::getStaticField<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<LIV::SDK::Unity::SDKResolution>, "_injection_SDKResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>();
}
 void LIV::SDK::Unity::SDKBridge::__set__injection_IsActive(LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<bool> value)  {
::cordl_internals::setStaticField<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<bool>, "_injection_IsActive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>(std::forward<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<bool>>(value));
}
 LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<bool> LIV::SDK::Unity::SDKBridge::__get__injection_IsActive()  {
return ::cordl_internals::getStaticField<LIV::SDK::Unity::LIV__SDK__Unity__SDKBridge__SDKInjection_1<bool>, "_injection_IsActive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>();
}
 void LIV::SDK::Unity::SDKBridge::__set__injection_DisableSubmit(bool value)  {
::cordl_internals::setStaticField<bool, "_injection_DisableSubmit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>(std::forward<bool>(value));
}
 bool LIV::SDK::Unity::SDKBridge::__get__injection_DisableSubmit()  {
return ::cordl_internals::getStaticField<bool, "_injection_DisableSubmit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>();
}
 void LIV::SDK::Unity::SDKBridge::__set__injection_DisableSubmitApplicationOutput(bool value)  {
::cordl_internals::setStaticField<bool, "_injection_DisableSubmitApplicationOutput", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>(std::forward<bool>(value));
}
 bool LIV::SDK::Unity::SDKBridge::__get__injection_DisableSubmitApplicationOutput()  {
return ::cordl_internals::getStaticField<bool, "_injection_DisableSubmitApplicationOutput", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>();
}
 void LIV::SDK::Unity::SDKBridge::__set__injection_DisableAddTexture(bool value)  {
::cordl_internals::setStaticField<bool, "_injection_DisableAddTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>(std::forward<bool>(value));
}
 bool LIV::SDK::Unity::SDKBridge::__get__injection_DisableAddTexture()  {
return ::cordl_internals::getStaticField<bool, "_injection_DisableAddTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>();
}
 void LIV::SDK::Unity::SDKBridge::__set__injection_DisableCreateFrame(bool value)  {
::cordl_internals::setStaticField<bool, "_injection_DisableCreateFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>(std::forward<bool>(value));
}
 bool LIV::SDK::Unity::SDKBridge::__get__injection_DisableCreateFrame()  {
return ::cordl_internals::getStaticField<bool, "_injection_DisableCreateFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get>();
}
 int32_t LIV::SDK::Unity::SDKBridge::AddStringToChannel(int32_t slot, ::cordl_internals::intptr_t str, int32_t length, uint64_t tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddStringToChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slot, str, length, tag);
}
 int32_t LIV::SDK::Unity::SDKBridge::addtexture(::cordl_internals::intptr_t sourcetexture, uint64_t tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "addtexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sourcetexture, tag);
}
 uint64_t LIV::SDK::Unity::SDKBridge::GetObjectTimeStamp(::cordl_internals::intptr_t obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetObjectTimeStamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, obj);
}
 uint64_t LIV::SDK::Unity::SDKBridge::GetCurrentTimeTicks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetCurrentTimeTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
 bool LIV::SDK::Unity::SDKBridge::GetIsCaptureActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetIsCaptureActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::cordl_internals::intptr_t LIV::SDK::Unity::SDKBridge::GetRenderEventFunc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetRenderEventFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method);
}
 ::cordl_internals::intptr_t LIV::SDK::Unity::SDKBridge::GetCompositorChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetCompositorChannelObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, slot, tag, timestamp);
}
 int32_t LIV::SDK::Unity::SDKBridge::AddObjectToCompositorChannel(int32_t slot, ::cordl_internals::intptr_t obj, int32_t objectsize, uint64_t tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddObjectToCompositorChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slot, obj, objectsize, tag);
}
 int32_t LIV::SDK::Unity::SDKBridge::AddObjectToFrame(::cordl_internals::intptr_t obj, int32_t objectsize, uint64_t tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddObjectToFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj, objectsize, tag);
}
 ::cordl_internals::intptr_t LIV::SDK::Unity::SDKBridge::updatinputframe(::cordl_internals::intptr_t InputFrame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "updatinputframe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, InputFrame);
}
 ::cordl_internals::intptr_t LIV::SDK::Unity::SDKBridge::GetViewportTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetViewportTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method);
}
 ::cordl_internals::intptr_t LIV::SDK::Unity::SDKBridge::GetChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetChannelObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, slot, tag, timestamp);
}
 int32_t LIV::SDK::Unity::SDKBridge::AddObjectToChannel(int32_t slot, ::cordl_internals::intptr_t obj, int32_t objectsize, uint64_t tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddObjectToChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slot, obj, objectsize, tag);
}
 uint64_t LIV::SDK::Unity::SDKBridge::Tag(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "Tag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, str);
}
 void LIV::SDK::Unity::SDKBridge::AddString(::StringW tag, ::StringW value, int32_t slot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tag, value, slot);
}
 void LIV::SDK::Unity::SDKBridge::AddTexture(LIV::SDK::Unity::SDKTexture texture, uint64_t tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture, tag);
}
 uint64_t LIV::SDK::Unity::SDKBridge::GetObjectTime(::cordl_internals::intptr_t objectptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetObjectTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, objectptr);
}
 uint64_t LIV::SDK::Unity::SDKBridge::GetCurrentTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetCurrentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
 bool LIV::SDK::Unity::SDKBridge::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "get_IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void LIV::SDK::Unity::SDKBridge::IssuePluginEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "IssuePluginEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void LIV::SDK::Unity::SDKBridge::SubmitApplicationOutput(LIV::SDK::Unity::SDKApplicationOutput applicationOutput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "SubmitApplicationOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKApplicationOutput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, applicationOutput);
}
template<typename T>
 bool LIV::SDK::Unity::SDKBridge::GetStructFromGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                        "GetStructFromGlobalChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mystruct, channel, tag);
}
template<typename T>
 int32_t LIV::SDK::Unity::SDKBridge::AddStructToGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                        "AddStructToGlobalChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mystruct, channel, tag);
}
template<typename T>
 bool LIV::SDK::Unity::SDKBridge::GetStructFromLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                        "GetStructFromLocalChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mystruct, channel, tag);
}
template<typename T>
 int32_t LIV::SDK::Unity::SDKBridge::AddStructToLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                        "AddStructToLocalChannel",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mystruct, channel, tag);
}
template<typename T>
 void LIV::SDK::Unity::SDKBridge::AddStructToFrame(ByRef<T> mystruct, uint64_t tag)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                        "AddStructToFrame",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mystruct, tag);
}
 bool LIV::SDK::Unity::SDKBridge::UpdateInputFrame(ByRef<LIV::SDK::Unity::SDKInputFrame> setframe)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "UpdateInputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<LIV::SDK::Unity::SDKInputFrame>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, setframe);
}
 LIV::SDK::Unity::SDKTexture LIV::SDK::Unity::SDKBridge::GetViewfinderTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetViewfinderTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKTexture, false>(nullptr, ___internal_method);
}
 void LIV::SDK::Unity::SDKBridge::AddTexture(LIV::SDK::Unity::SDKTexture texture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "AddTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture);
}
 void LIV::SDK::Unity::SDKBridge::CreateFrame(LIV::SDK::Unity::SDKOutputFrame frame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "CreateFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKOutputFrame>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frame);
}
 void LIV::SDK::Unity::SDKBridge::SetGroundPlane(LIV::SDK::Unity::SDKPlane groundPlane)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "SetGroundPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::SDKPlane>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, groundPlane);
}
 bool LIV::SDK::Unity::SDKBridge::GetResolution(ByRef<LIV::SDK::Unity::SDKResolution> sdkResolution)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKBridge>::get(),
                            "GetResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<LIV::SDK::Unity::SDKResolution>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sdkResolution);
}
