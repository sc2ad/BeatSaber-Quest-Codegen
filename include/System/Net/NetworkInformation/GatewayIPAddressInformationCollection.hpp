// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: GatewayIPAddressInformation
  class GatewayIPAddressInformation;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::GatewayIPAddressInformationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, "System.Net.NetworkInformation", "GatewayIPAddressInformationCollection");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.GatewayIPAddressInformationCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1065034
  class GatewayIPAddressInformationCollection : public ::Il2CppObject/*, public ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*/ {
    public:
    public:
    // private System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation> addresses
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* addresses;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>
    operator ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(this);
    }
    // Creating interface conversion operator: i_GatewayIPAddressInformation
    inline ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* i_GatewayIPAddressInformation() noexcept {
      return reinterpret_cast<::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*
    constexpr operator ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*() const noexcept {
      return addresses;
    }
    // Get instance field reference: private System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation> addresses
    [[deprecated("Use field access instead!")]] ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*& dyn_addresses();
    // public System.Int32 get_Count()
    // Offset: 0x1AB10E8
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x1AB1140
    bool get_IsReadOnly();
    // protected internal System.Void .ctor()
    // Offset: 0x1AB1008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GatewayIPAddressInformationCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GatewayIPAddressInformationCollection*, creationType>()));
    }
    // public System.Void CopyTo(System.Net.NetworkInformation.GatewayIPAddressInformation[] array, System.Int32 offset)
    // Offset: 0x1AB1078
    void CopyTo(::ArrayW<::System::Net::NetworkInformation::GatewayIPAddressInformation*> array, int offset);
    // public System.Void Add(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x1AB1148
    void Add(::System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // System.Void InternalAdd(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x1AB11C8
    void InternalAdd(::System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Boolean Contains(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x1AB1230
    bool Contains(::System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.GatewayIPAddressInformation> GetEnumerator()
    // Offset: 0x1AB1298
    ::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1AB12F0
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean Remove(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x1AB1300
    bool Remove(::System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Void Clear()
    // Offset: 0x1AB1380
    void Clear();
  }; // System.Net.NetworkInformation.GatewayIPAddressInformationCollection
  #pragma pack(pop)
  static check_size<sizeof(GatewayIPAddressInformationCollection), 16 + sizeof(::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*)> __System_Net_NetworkInformation_GatewayIPAddressInformationCollectionSizeCheck;
  static_assert(sizeof(GatewayIPAddressInformationCollection) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(::ArrayW<::System::Net::NetworkInformation::GatewayIPAddressInformation*>, int)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(::System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Add)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::InternalAdd
// Il2CppName: InternalAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(::System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::InternalAdd)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "InternalAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(::System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(::System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
