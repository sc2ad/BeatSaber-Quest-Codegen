#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ParameterData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmChoiceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ParameterModifier_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2022624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0._Initialize_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::*)(HoudiniEngineUnity::HAPI_ParmInfo)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::_Initialize_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20251d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0>::get(),
                            "<Initialize>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_ParmInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::__set_parentID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::__get_parentID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::__set___9__0(System::Predicate_1<HoudiniEngineUnity::HAPI_ParmInfo> value)  {
::cordl_internals::setInstanceField<System::Predicate_1<HoudiniEngineUnity::HAPI_ParmInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Predicate_1<HoudiniEngineUnity::HAPI_ParmInfo>>(value));
}
constexpr System::Predicate_1<HoudiniEngineUnity::HAPI_ParmInfo> HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::__get___9__0() const {
return ::cordl_internals::getInstanceField<System::Predicate_1<HoudiniEngineUnity::HAPI_ParmInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0>())) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0::_Initialize_b__0(HoudiniEngineUnity::HAPI_ParmInfo p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0>::get(),
                            "<Initialize>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_ParmInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, p);
}
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.get_RootParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int32_t> (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::get_RootParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20207d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_RootParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.set_RootParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(System::Collections::Generic::List_1<int32_t>)>(&HoudiniEngineUnity::HEU_Parameters::set_RootParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20207dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_RootParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.get_ParameterModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::get_ParameterModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20207e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_ParameterModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.set_ParameterModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier>)>(&HoudiniEngineUnity::HEU_Parameters::set_ParameterModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20207ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_ParameterModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.get_RequiresRegeneration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::get_RequiresRegeneration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20207f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_RequiresRegeneration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.set_RequiresRegeneration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(bool)>(&HoudiniEngineUnity::HEU_Parameters::set_RequiresRegeneration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20207fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_RequiresRegeneration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::GetPresetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2020808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.SetPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(::ArrayW<uint8_t>)>(&HoudiniEngineUnity::HEU_Parameters::SetPresetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2020810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SetPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetDefaultPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::GetDefaultPresetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2020818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetDefaultPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.AreParametersValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::AreParametersValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2020820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "AreParametersValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.get_ShowParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::get_ShowParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2020828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_ShowParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.set_ShowParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(bool)>(&HoudiniEngineUnity::HEU_Parameters::set_ShowParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2020830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_ShowParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.get_RecacheUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::get_RecacheUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202083c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_RecacheUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.set_RecacheUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(bool)>(&HoudiniEngineUnity::HEU_Parameters::set_RecacheUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2020844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_RecacheUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.CleanUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::CleanUp)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2020850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, ByRef<HoudiniEngineUnity::HAPI_NodeInfo>, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData>, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode>, HoudiniEngineUnity::HEU_HoudiniAsset)>(&HoudiniEngineUnity::HEU_Parameters::Initialize)> {
  constexpr static std::size_t size = 0x1b38;
  constexpr static std::size_t addrs = 0x2020aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_NodeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.SetupRampParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_ParameterData)>(&HoudiniEngineUnity::HEU_Parameters::SetupRampParameter)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x202262c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SetupRampParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ParameterData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData> (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::GetParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2022a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_ParameterData (HoudiniEngineUnity::HEU_Parameters::*)(int32_t)>(&HoudiniEngineUnity::HEU_Parameters::GetParameter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x201e08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_ParameterData (HoudiniEngineUnity::HEU_Parameters::*)(::StringW)>(&HoudiniEngineUnity::HEU_Parameters::GetParameter)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2022a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetParameterWithParmID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_ParameterData (HoudiniEngineUnity::HEU_Parameters::*)(int32_t)>(&HoudiniEngineUnity::HEU_Parameters::GetParameterWithParmID)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x201dec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameterWithParmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.RemoveParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(int32_t)>(&HoudiniEngineUnity::HEU_Parameters::RemoveParameter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2022bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "RemoveParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetChosenIndexFromChoiceList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_ParameterData)>(&HoudiniEngineUnity::HEU_Parameters::GetChosenIndexFromChoiceList)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2022c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetChosenIndexFromChoiceList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ParameterData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetStringFromParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_Parameters::*)(::StringW)>(&HoudiniEngineUnity::HEU_Parameters::GetStringFromParameter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2022ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetStringFromParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.SetStringToParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_Parameters::SetStringToParameter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2022d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SetStringToParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.HaveParametersChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::HaveParametersChanged)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2022d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "HaveParametersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.UploadValuesToHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_HoudiniAsset, bool, bool)>(&HoudiniEngineUnity::HEU_Parameters::UploadValuesToHoudini)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x20231a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "UploadValuesToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.InsertInstanceToMultiParm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(int32_t, int32_t, int32_t)>(&HoudiniEngineUnity::HEU_Parameters::InsertInstanceToMultiParm)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x20238c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "InsertInstanceToMultiParm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.RemoveInstancesFromMultiParm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(int32_t, int32_t, int32_t)>(&HoudiniEngineUnity::HEU_Parameters::RemoveInstancesFromMultiParm)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2023998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "RemoveInstancesFromMultiParm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.ClearInstancesFromMultiParm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(int32_t)>(&HoudiniEngineUnity::HEU_Parameters::ClearInstancesFromMultiParm)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2023a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "ClearInstancesFromMultiParm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.HasModifiersPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::HasModifiersPending)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2023b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "HasModifiersPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.ProcessModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Parameters::ProcessModifiers)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x2023b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "ProcessModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetParameterDataForUIRestore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData>, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode>)>(&HoudiniEngineUnity::HEU_Parameters::GetParameterDataForUIRestore)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2024210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameterDataForUIRestore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.GetInputNodeConnectionObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(System::Collections::Generic::List_1<UnityEngine::GameObject>)>(&HoudiniEngineUnity::HEU_Parameters::GetInputNodeConnectionObjects)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20243f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetInputNodeConnectionObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.DownloadPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Parameters::DownloadPresetData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x20243fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "DownloadPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.UploadPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Parameters::UploadPresetData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x202444c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "UploadPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.DownloadAsDefaultPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Parameters::DownloadAsDefaultPresetData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2024490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "DownloadAsDefaultPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.UploadParameterInputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_HoudiniAsset, bool)>(&HoudiniEngineUnity::HEU_Parameters::UploadParameterInputs)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x20244e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "UploadParameterInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.UpdateTransformParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase, ByRef<HoudiniEngineUnity::HAPI_TransformEuler>)>(&HoudiniEngineUnity::HEU_Parameters::UpdateTransformParameters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x20246c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "UpdateTransformParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_TransformEuler>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.SyncParameterFromHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase, ::StringW)>(&HoudiniEngineUnity::HEU_Parameters::SyncParameterFromHoudini)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2024768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SyncParameterFromHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.SyncInternalParametersForUndoCompare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Parameters::SyncInternalParametersForUndoCompare)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x20247e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SyncInternalParametersForUndoCompare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.ResetAllToDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Parameters::ResetAllToDefault)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2024c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "ResetAllToDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::*)(HoudiniEngineUnity::HEU_Parameters)>(&HoudiniEngineUnity::HEU_Parameters::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2024d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_Parameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Parameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Parameters::*)()>(&HoudiniEngineUnity::HEU_Parameters::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20250a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Parameters>
constexpr  HoudiniEngineUnity::HEU_Parameters::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Parameters>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Parameters>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__nodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_Parameters::__get__nodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__uiLabel(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_Parameters::__get__uiLabel() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__paramInts(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_Parameters::__get__paramInts() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__paramFloats(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_Parameters::__get__paramFloats() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__paramStrings(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_Parameters::__get__paramStrings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__paramChoices(::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>>(value));
}
constexpr ::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo> HoudiniEngineUnity::HEU_Parameters::__get__paramChoices() const {
return ::cordl_internals::getInstanceField<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__rootParameters(System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr System::Collections::Generic::List_1<int32_t> HoudiniEngineUnity::HEU_Parameters::__get__rootParameters() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__parameterList(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData> HoudiniEngineUnity::HEU_Parameters::__get__parameterList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__parameterModifiers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> HoudiniEngineUnity::HEU_Parameters::__get__parameterModifiers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__regenerateParameters(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_Parameters::__get__regenerateParameters() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__presetData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> HoudiniEngineUnity::HEU_Parameters::__get__presetData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__defaultPresetData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> HoudiniEngineUnity::HEU_Parameters::__get__defaultPresetData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__validParameters(bool value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_Parameters::__get__validParameters() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__showParameters(bool value)  {
::cordl_internals::setInstanceField<bool, 0x79>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_Parameters::__get__showParameters() const {
return ::cordl_internals::getInstanceField<bool, 0x79>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Parameters::__set__recacheUI(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_Parameters::__get__recacheUI() const {
return ::cordl_internals::getInstanceField<bool, 0x7a>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<int32_t> HoudiniEngineUnity::HEU_Parameters::get_RootParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_RootParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Parameters::set_RootParameters(System::Collections::Generic::List_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_RootParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> HoudiniEngineUnity::HEU_Parameters::get_ParameterModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_ParameterModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier>, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Parameters::set_ParameterModifiers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_ParameterModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HoudiniEngineUnity::HEU_Parameters::get_RequiresRegeneration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_RequiresRegeneration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Parameters::set_RequiresRegeneration(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_RequiresRegeneration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<uint8_t> HoudiniEngineUnity::HEU_Parameters::GetPresetData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Parameters::SetPresetData(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SetPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 ::ArrayW<uint8_t> HoudiniEngineUnity::HEU_Parameters::GetDefaultPresetData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetDefaultPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_Parameters::AreParametersValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "AreParametersValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_Parameters::get_ShowParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_ShowParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Parameters::set_ShowParameters(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_ShowParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HoudiniEngineUnity::HEU_Parameters::get_RecacheUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "get_RecacheUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Parameters::set_RecacheUI(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "set_RecacheUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HoudiniEngineUnity::HEU_Parameters::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_Parameters::Initialize(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ByRef<HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData> previousParamFolders, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode> previousParamInputNodes, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_NodeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, nodeID, nodeInfo, previousParamFolders, previousParamInputNodes, parentAsset);
}
 void HoudiniEngineUnity::HEU_Parameters::SetupRampParameter(HoudiniEngineUnity::HEU_ParameterData rampParameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SetupRampParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ParameterData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rampParameter);
}
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData> HoudiniEngineUnity::HEU_Parameters::GetParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData>, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_ParameterData HoudiniEngineUnity::HEU_Parameters::GetParameter(int32_t listIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_ParameterData, false>(const_cast<void*>(instance), ___internal_method, listIndex);
}
 HoudiniEngineUnity::HEU_ParameterData HoudiniEngineUnity::HEU_Parameters::GetParameter(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_ParameterData, false>(const_cast<void*>(instance), ___internal_method, name);
}
 HoudiniEngineUnity::HEU_ParameterData HoudiniEngineUnity::HEU_Parameters::GetParameterWithParmID(int32_t parmID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameterWithParmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_ParameterData, false>(const_cast<void*>(instance), ___internal_method, parmID);
}
 void HoudiniEngineUnity::HEU_Parameters::RemoveParameter(int32_t listIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "RemoveParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, listIndex);
}
 int32_t HoudiniEngineUnity::HEU_Parameters::GetChosenIndexFromChoiceList(HoudiniEngineUnity::HEU_ParameterData inChoiceParameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetChosenIndexFromChoiceList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ParameterData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, inChoiceParameter);
}
 ::StringW HoudiniEngineUnity::HEU_Parameters::GetStringFromParameter(::StringW paramName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetStringFromParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, paramName);
}
 void HoudiniEngineUnity::HEU_Parameters::SetStringToParameter(::StringW paramName, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SetStringToParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, paramName, value);
}
 bool HoudiniEngineUnity::HEU_Parameters::HaveParametersChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "HaveParametersChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param bDoCheck: bool (default: true)
/// @param bForceUploadInputs: bool (default: false)
 bool HoudiniEngineUnity::HEU_Parameters::UploadValuesToHoudini(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, bool bDoCheck, bool bForceUploadInputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "UploadValuesToHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, parentAsset, bDoCheck, bForceUploadInputs);
}
 void HoudiniEngineUnity::HEU_Parameters::InsertInstanceToMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToAdd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "InsertInstanceToMultiParm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unityParamIndex, instanceIndex, numInstancesToAdd);
}
 void HoudiniEngineUnity::HEU_Parameters::RemoveInstancesFromMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToRemove)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "RemoveInstancesFromMultiParm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unityParamIndex, instanceIndex, numInstancesToRemove);
}
 void HoudiniEngineUnity::HEU_Parameters::ClearInstancesFromMultiParm(int32_t unityParamIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "ClearInstancesFromMultiParm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unityParamIndex);
}
 bool HoudiniEngineUnity::HEU_Parameters::HasModifiersPending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "HasModifiersPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Parameters::ProcessModifiers(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "ProcessModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_Parameters::GetParameterDataForUIRestore(System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData> folderParams, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode> inputNodeParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetParameterDataForUIRestore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, folderParams, inputNodeParams);
}
 void HoudiniEngineUnity::HEU_Parameters::GetInputNodeConnectionObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> inputNodeObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "GetInputNodeConnectionObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputNodeObjects);
}
 void HoudiniEngineUnity::HEU_Parameters::DownloadPresetData(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "DownloadPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_Parameters::UploadPresetData(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "UploadPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_Parameters::DownloadAsDefaultPresetData(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "DownloadAsDefaultPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_Parameters::UploadParameterInputs(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, bool bForceUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "UploadParameterInputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, parentAsset, bForceUpdate);
}
 void HoudiniEngineUnity::HEU_Parameters::UpdateTransformParameters(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_TransformEuler> HAPITransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "UpdateTransformParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_TransformEuler>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, HAPITransform);
}
 void HoudiniEngineUnity::HEU_Parameters::SyncParameterFromHoudini(HoudiniEngineUnity::HEU_SessionBase session, ::StringW parameterName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SyncParameterFromHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, parameterName);
}
 void HoudiniEngineUnity::HEU_Parameters::SyncInternalParametersForUndoCompare(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "SyncInternalParametersForUndoCompare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_Parameters::ResetAllToDefault(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "ResetAllToDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 bool HoudiniEngineUnity::HEU_Parameters::IsEquivalentTo(HoudiniEngineUnity::HEU_Parameters other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_Parameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_Parameters::HEU_Parameters()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<HEU_Parameters>())) {}
 void HoudiniEngineUnity::HEU_Parameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Parameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
