// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: MS.Internal.Xml.Cache.XPathNode
#include "MS/Internal/Xml/Cache/XPathNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Forward declaring type: XPathNodeRef
  struct XPathNodeRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeRef, "MS.Internal.Xml.Cache", "XPathNodeRef");
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: MS.Internal.Xml.Cache.XPathNodeRef
  // [TokenAttribute] Offset: FFFFFFFF
  struct XPathNodeRef/*, public ::System::ValueType*/ {
    public:
    public:
    // private MS.Internal.Xml.Cache.XPathNode[] page
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> page;
    // Field size check
    static_assert(sizeof(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>) == 0x8);
    // private System.Int32 idx
    // Size: 0x4
    // Offset: 0x8
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XPathNodeRef
    constexpr XPathNodeRef(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> page_ = ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>(static_cast<void*>(nullptr)), int idx_ = {}) noexcept : page{page_}, idx{idx_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNode[] page
    [[deprecated("Use field access instead!")]] ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& dyn_page();
    // Get instance field reference: private System.Int32 idx
    [[deprecated("Use field access instead!")]] int& dyn_idx();
    // public MS.Internal.Xml.Cache.XPathNode[] get_Page()
    // Offset: 0x1ADE2FC
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> get_Page();
    // public System.Int32 get_Index()
    // Offset: 0x1ADE304
    int get_Index();
    // public System.Void .ctor(MS.Internal.Xml.Cache.XPathNode[] page, System.Int32 idx)
    // Offset: 0x1ADE2F0
    // ABORTED: conflicts with another method.  XPathNodeRef(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> page, int idx);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1ADE30C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // MS.Internal.Xml.Cache.XPathNodeRef
  #pragma pack(pop)
  static check_size<sizeof(XPathNodeRef), 8 + sizeof(int)> __MS_Internal_Xml_Cache_XPathNodeRefSizeCheck;
  static_assert(sizeof(XPathNodeRef) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeRef::get_Page
// Il2CppName: get_Page
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::MS::Internal::Xml::Cache::XPathNode> (MS::Internal::Xml::Cache::XPathNodeRef::*)()>(&MS::Internal::Xml::Cache::XPathNodeRef::get_Page)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeRef), "get_Page", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeRef::get_Index
// Il2CppName: get_Index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathNodeRef::*)()>(&MS::Internal::Xml::Cache::XPathNodeRef::get_Index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeRef), "get_Index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeRef::XPathNodeRef
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeRef::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathNodeRef::*)()>(&MS::Internal::Xml::Cache::XPathNodeRef::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeRef), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
