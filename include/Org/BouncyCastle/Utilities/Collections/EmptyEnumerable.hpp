// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Forward declaring type: EmptyEnumerable
  class EmptyEnumerable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*, "Org.BouncyCastle.Utilities.Collections", "EmptyEnumerable");
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.EmptyEnumerable
  // [TokenAttribute] Offset: FFFFFFFF
  class EmptyEnumerable : public ::Il2CppObject/*, public ::System::Collections::IEnumerable*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: i_IEnumerable
    inline ::System::Collections::IEnumerable* i_IEnumerable() noexcept {
      return reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Get static field: static public readonly System.Collections.IEnumerable Instance
    static ::System::Collections::IEnumerable* _get_Instance();
    // Set static field: static public readonly System.Collections.IEnumerable Instance
    static void _set_Instance(::System::Collections::IEnumerable* value);
    // private System.Void .ctor()
    // Offset: 0x18227FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyEnumerable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyEnumerable*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x182286C
    static void _cctor();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1822804
    ::System::Collections::IEnumerator* GetEnumerator();
  }; // Org.BouncyCastle.Utilities.Collections.EmptyEnumerable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::*)()>(&Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
