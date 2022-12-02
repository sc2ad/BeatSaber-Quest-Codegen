// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeList
  class XmlNodeList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlNodeList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeList*, "System.Xml", "XmlNodeList");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlNodeList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1079CCC
  class XmlNodeList : public ::Il2CppObject/*, public ::System::IDisposable, public ::System::Collections::IEnumerable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: i_IEnumerable
    inline ::System::Collections::IEnumerable* i_IEnumerable() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count();
    // protected System.Void .ctor()
    // Offset: 0x1615ACC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNodeList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlNodeList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNodeList*, creationType>()));
    }
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* GetEnumerator();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1615ABC
    void System_IDisposable_Dispose();
    // protected System.Void PrivateDisposeNodeList()
    // Offset: 0x1615AC8
    void PrivateDisposeNodeList();
  }; // System.Xml.XmlNodeList
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlNodeList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlNodeList::*)()>(&System::Xml::XmlNodeList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNodeList*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNodeList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlNodeList::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Xml::XmlNodeList::*)()>(&System::Xml::XmlNodeList::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNodeList*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNodeList::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNodeList::*)()>(&System::Xml::XmlNodeList::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNodeList*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlNodeList::PrivateDisposeNodeList
// Il2CppName: PrivateDisposeNodeList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNodeList::*)()>(&System::Xml::XmlNodeList::PrivateDisposeNodeList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlNodeList*), "PrivateDisposeNodeList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
