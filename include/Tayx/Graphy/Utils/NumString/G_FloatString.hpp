// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Tayx.Graphy.Utils.NumString
namespace Tayx::Graphy::Utils::NumString {
  // Forward declaring type: G_FloatString
  class G_FloatString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Tayx::Graphy::Utils::NumString::G_FloatString);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Utils::NumString::G_FloatString*, "Tayx.Graphy.Utils.NumString", "G_FloatString");
// Type namespace: Tayx.Graphy.Utils.NumString
namespace Tayx::Graphy::Utils::NumString {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.Utils.NumString.G_FloatString
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class G_FloatString : public ::Il2CppObject {
    public:
    // static field const value: static private System.String m_floatFormat
    static constexpr const char* m_floatFormat = "0.0";
    // Get static field: static private System.String m_floatFormat
    static ::StringW _get_m_floatFormat();
    // Set static field: static private System.String m_floatFormat
    static void _set_m_floatFormat(::StringW value);
    // Get static field: static private System.Single m_decimalMultiplier
    static float _get_m_decimalMultiplier();
    // Set static field: static private System.Single m_decimalMultiplier
    static void _set_m_decimalMultiplier(float value);
    // Get static field: static private System.String[] m_negativeBuffer
    static ::ArrayW<::StringW> _get_m_negativeBuffer();
    // Set static field: static private System.String[] m_negativeBuffer
    static void _set_m_negativeBuffer(::ArrayW<::StringW> value);
    // Get static field: static private System.String[] m_positiveBuffer
    static ::ArrayW<::StringW> _get_m_positiveBuffer();
    // Set static field: static private System.String[] m_positiveBuffer
    static void _set_m_positiveBuffer(::ArrayW<::StringW> value);
    // static public System.Single get_MinValue()
    // Offset: 0x2AE30A0
    static float get_MinValue();
    // static public System.Single get_MaxValue()
    // Offset: 0x2AE3194
    static float get_MaxValue();
    // static private System.Void .cctor()
    // Offset: 0x2AE3460
    static void _cctor();
    // static public System.Void Init(System.Single minNegativeValue, System.Single maxPositiveValue)
    // Offset: 0x2ADE578
    static void Init(float minNegativeValue, float maxPositiveValue);
    // static public System.Void Dispose()
    // Offset: 0x2AE13F8
    static void Dispose();
    // static public System.String ToStringNonAlloc(System.Single value)
    // Offset: 0x2AE32C8
    static ::StringW ToStringNonAlloc(float value);
    // static public System.String ToStringNonAlloc(System.Single value, System.String format)
    // Offset: 0x2ADE3F0
    static ::StringW ToStringNonAlloc(float value, ::StringW format);
    // static public System.Int32 ToInt(System.Single f)
    // Offset: 0x2AE3438
    static int ToInt(float f);
    // static public System.Single ToFloat(System.Int32 i)
    // Offset: 0x2AE3458
    static float ToFloat(int i);
    // static private System.Int32 ToIndex(System.Single f)
    // Offset: 0x2AE320C
    static int ToIndex(float f);
    // static private System.Single FromIndex(System.Int32 i)
    // Offset: 0x2AE3120
    static float FromIndex(int i);
  }; // Tayx.Graphy.Utils.NumString.G_FloatString
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::get_MinValue
// Il2CppName: get_MinValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Tayx::Graphy::Utils::NumString::G_FloatString::get_MinValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "get_MinValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::get_MaxValue
// Il2CppName: get_MaxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Tayx::Graphy::Utils::NumString::G_FloatString::get_MaxValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "get_MaxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Tayx::Graphy::Utils::NumString::G_FloatString::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float)>(&Tayx::Graphy::Utils::NumString::G_FloatString::Init)> {
  static const MethodInfo* get() {
    static auto* minNegativeValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxPositiveValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minNegativeValue, maxPositiveValue});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Tayx::Graphy::Utils::NumString::G_FloatString::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::ToStringNonAlloc
// Il2CppName: ToStringNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(float)>(&Tayx::Graphy::Utils::NumString::G_FloatString::ToStringNonAlloc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "ToStringNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::ToStringNonAlloc
// Il2CppName: ToStringNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(float, ::StringW)>(&Tayx::Graphy::Utils::NumString::G_FloatString::ToStringNonAlloc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "ToStringNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::ToInt
// Il2CppName: ToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&Tayx::Graphy::Utils::NumString::G_FloatString::ToInt)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "ToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::ToFloat
// Il2CppName: ToFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int)>(&Tayx::Graphy::Utils::NumString::G_FloatString::ToFloat)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "ToFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::ToIndex
// Il2CppName: ToIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&Tayx::Graphy::Utils::NumString::G_FloatString::ToIndex)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "ToIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: Tayx::Graphy::Utils::NumString::G_FloatString::FromIndex
// Il2CppName: FromIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int)>(&Tayx::Graphy::Utils::NumString::G_FloatString::FromIndex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Tayx::Graphy::Utils::NumString::G_FloatString*), "FromIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
