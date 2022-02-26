// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Forward declaring type: ISet
  class ISet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::ISet);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::ISet*, "Org.BouncyCastle.Utilities.Collections", "ISet");
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.ISet
  // [TokenAttribute] Offset: FFFFFFFF
  class ISet/*, public ::System::Collections::ICollection*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // public System.Void Add(System.Object o)
    // Offset: 0xFFFFFFFF
    void Add(::Il2CppObject* o);
  }; // Org.BouncyCastle.Utilities.Collections.ISet
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::ISet::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::ISet::*)(::Il2CppObject*)>(&Org::BouncyCastle::Utilities::Collections::ISet::Add)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::ISet*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
