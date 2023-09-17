#pragma once
namespace {
#include "GlobalNamespace/zzzz__SaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__IBladeMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_bladeSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::get_bladeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bff34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "get_bladeSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_lastAddedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::get_lastAddedData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21bff3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "get_lastAddedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_prevAddedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::get_prevAddedData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21bff98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "get_prevAddedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21bfff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.AddDataProcessor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor)>(&::GlobalNamespace::SaberMovementData::AddDataProcessor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c009c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "AddDataProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.RemoveDataProcessor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor)>(&::GlobalNamespace::SaberMovementData::RemoveDataProcessor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c00f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "RemoveDataProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.RequestLastDataProcessing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor)>(&::GlobalNamespace::SaberMovementData::RequestLastDataProcessing)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x21c014c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "RequestLastDataProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.AddNewData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::SaberMovementData::AddNewData)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x21c02d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "AddNewData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeAdditionalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(&::GlobalNamespace::SaberMovementData::ComputeAdditionalData)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21c07a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeAdditionalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputePlaneNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SaberMovementData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SaberMovementData::ComputePlaneNormal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x21c09d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputePlaneNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeCutPlaneNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::ComputeCutPlaneNormal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21c0b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeCutPlaneNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)(float_t)>(&::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c0bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeSwingRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21c0e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeSwingRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)(bool, float_t)>(&::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x21c0bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeSwingRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBladeMovementData
constexpr  ::GlobalNamespace::SaberMovementData::operator ::GlobalNamespace::IBladeMovementData() const noexcept {
return ::GlobalNamespace::IBladeMovementData(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::ISaberMovementData
constexpr  ::GlobalNamespace::SaberMovementData::operator ::GlobalNamespace::ISaberMovementData() const noexcept {
return ::GlobalNamespace::ISaberMovementData(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberMovementData::__set__data(::ArrayW<::GlobalNamespace::BladeMovementDataElement> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BladeMovementDataElement>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::BladeMovementDataElement>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BladeMovementDataElement> ::GlobalNamespace::SaberMovementData::__get__data() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BladeMovementDataElement>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberMovementData::__set__dataProcessors(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor>>(value));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor> ::GlobalNamespace::SaberMovementData::__get__dataProcessors() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberMovementData::__set__nextAddIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::SaberMovementData::__get__nextAddIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberMovementData::__set__validCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::SaberMovementData::__get__validCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberMovementData::__set__bladeSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::SaberMovementData::__get__bladeSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::SaberMovementData::get_bladeSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "get_bladeSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::BladeMovementDataElement ::GlobalNamespace::SaberMovementData::get_lastAddedData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "get_lastAddedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::BladeMovementDataElement ::GlobalNamespace::SaberMovementData::get_prevAddedData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "get_prevAddedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SaberMovementData::SaberMovementData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SaberMovementData>())) {}
 void ::GlobalNamespace::SaberMovementData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SaberMovementData::AddDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor dataProcessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "AddDataProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataProcessor);
}
 void ::GlobalNamespace::SaberMovementData::RemoveDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor dataProcessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "RemoveDataProcessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataProcessor);
}
 void ::GlobalNamespace::SaberMovementData::RequestLastDataProcessing(::GlobalNamespace::ISaberMovementDataProcessor dataProcessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "RequestLastDataProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementDataProcessor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataProcessor);
}
 void ::GlobalNamespace::SaberMovementData::AddNewData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "AddNewData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topPos, bottomPos, time);
}
 void ::GlobalNamespace::SaberMovementData::ComputeAdditionalData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, int32_t idxOffset, ByRef<::UnityEngine::Vector3> segmentNormal, ByRef<float_t> segmentAngle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeAdditionalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topPos, bottomPos, idxOffset, segmentNormal, segmentAngle);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::SaberMovementData::ComputePlaneNormal(::UnityEngine::Vector3 tp0, ::UnityEngine::Vector3 bp0, ::UnityEngine::Vector3 tp1, ::UnityEngine::Vector3 bp1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputePlaneNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, tp0, bp0, tp1, bp1);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::SaberMovementData::ComputeCutPlaneNormal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeCutPlaneNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::SaberMovementData::ComputeSwingRating(float_t overrideSegmentAngle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeSwingRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, overrideSegmentAngle);
}
 float_t ::GlobalNamespace::SaberMovementData::ComputeSwingRating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeSwingRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::SaberMovementData::ComputeSwingRating(bool overrideSegmenAngle, float_t overrideValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberMovementData>::get(),
                            "ComputeSwingRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, overrideSegmenAngle, overrideValue);
}
} // end anonymous namespace
