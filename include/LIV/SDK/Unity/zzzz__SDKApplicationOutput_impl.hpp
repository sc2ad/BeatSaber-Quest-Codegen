#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKApplicationOutput_def.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
//  Writing Method size for method: LIV::SDK::Unity::SDKApplicationOutput.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKApplicationOutput (*)()>(&LIV::SDK::Unity::SDKApplicationOutput::get_empty)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x209bc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKApplicationOutput>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKApplicationOutput.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKApplicationOutput::*)()>(&LIV::SDK::Unity::SDKApplicationOutput::ToString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x20a2770;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LIV::SDK::Unity::SDKApplicationOutput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKApplicationOutput>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "supportedFeatures", ty: "LIV::SDK::Unity::FEATURES", modifiers: "", def_value: Some("{}") }, CppParam { name: "engineName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "engineVersion", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "applicationName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "applicationVersion", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "xrDeviceName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "graphicsAPI", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sdkID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sdkVersion", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr LIV::SDK::Unity::SDKApplicationOutput::SDKApplicationOutput(LIV::SDK::Unity::FEATURES supportedFeatures, ::StringW engineName, ::StringW engineVersion, ::StringW applicationName, ::StringW applicationVersion, ::StringW xrDeviceName, ::StringW graphicsAPI, ::StringW sdkID, ::StringW sdkVersion) noexcept : ::bs_hook::ValueTypeWrapper() {this->supportedFeatures = supportedFeatures;
this->engineName = engineName;
this->engineVersion = engineVersion;
this->applicationName = applicationName;
this->applicationVersion = applicationVersion;
this->xrDeviceName = xrDeviceName;
this->graphicsAPI = graphicsAPI;
this->sdkID = sdkID;
this->sdkVersion = sdkVersion;
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_supportedFeatures(LIV::SDK::Unity::FEATURES value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::FEATURES, 0x0>(this->__instance, std::forward<LIV::SDK::Unity::FEATURES>(value));
}
constexpr LIV::SDK::Unity::FEATURES LIV::SDK::Unity::SDKApplicationOutput::__get_supportedFeatures() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::FEATURES, 0x0>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_engineName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LIV::SDK::Unity::SDKApplicationOutput::__get_engineName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_engineVersion(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LIV::SDK::Unity::SDKApplicationOutput::__get_engineVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_applicationName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LIV::SDK::Unity::SDKApplicationOutput::__get_applicationName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_applicationVersion(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LIV::SDK::Unity::SDKApplicationOutput::__get_applicationVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_xrDeviceName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LIV::SDK::Unity::SDKApplicationOutput::__get_xrDeviceName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_graphicsAPI(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LIV::SDK::Unity::SDKApplicationOutput::__get_graphicsAPI() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_sdkID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LIV::SDK::Unity::SDKApplicationOutput::__get_sdkID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKApplicationOutput::__set_sdkVersion(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW LIV::SDK::Unity::SDKApplicationOutput::__get_sdkVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->__instance);
}
 LIV::SDK::Unity::SDKApplicationOutput LIV::SDK::Unity::SDKApplicationOutput::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKApplicationOutput>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKApplicationOutput, false>(nullptr, ___internal_method);
}
 ::StringW LIV::SDK::Unity::SDKApplicationOutput::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKApplicationOutput>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
