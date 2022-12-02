// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.CookieVariant
#include "System/Net/CookieVariant.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HeaderVariantInfo
  struct HeaderVariantInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderVariantInfo, "System.Net", "HeaderVariantInfo");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.HeaderVariantInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HeaderVariantInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Net.CookieVariant m_variant
    // Size: 0x4
    // Offset: 0x8
    ::System::Net::CookieVariant m_variant;
    // Field size check
    static_assert(sizeof(::System::Net::CookieVariant) == 0x4);
    public:
    // Creating value type constructor for type: HeaderVariantInfo
    constexpr HeaderVariantInfo(::StringW m_name_ = {}, ::System::Net::CookieVariant m_variant_ = {}) noexcept : m_name{m_name_}, m_variant{m_variant_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.String m_name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_name();
    // Get instance field reference: private System.Net.CookieVariant m_variant
    [[deprecated("Use field access instead!")]] ::System::Net::CookieVariant& dyn_m_variant();
    // System.String get_Name()
    // Offset: 0x1AC4B84
    ::StringW get_Name();
    // System.Net.CookieVariant get_Variant()
    // Offset: 0x1AC4B8C
    ::System::Net::CookieVariant get_Variant();
    // System.Void .ctor(System.String name, System.Net.CookieVariant variant)
    // Offset: 0x1AC4B78
    // ABORTED: conflicts with another method.  HeaderVariantInfo(::StringW name, ::System::Net::CookieVariant variant);
  }; // System.Net.HeaderVariantInfo
  #pragma pack(pop)
  static check_size<sizeof(HeaderVariantInfo), 8 + sizeof(::System::Net::CookieVariant)> __System_Net_HeaderVariantInfoSizeCheck;
  static_assert(sizeof(HeaderVariantInfo) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HeaderVariantInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HeaderVariantInfo::*)()>(&System::Net::HeaderVariantInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HeaderVariantInfo), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HeaderVariantInfo::get_Variant
// Il2CppName: get_Variant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieVariant (System::Net::HeaderVariantInfo::*)()>(&System::Net::HeaderVariantInfo::get_Variant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HeaderVariantInfo), "get_Variant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HeaderVariantInfo::HeaderVariantInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
