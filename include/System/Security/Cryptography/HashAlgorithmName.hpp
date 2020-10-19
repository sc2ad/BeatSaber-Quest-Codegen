// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.HashAlgorithmName
  struct HashAlgorithmName : public System::ValueType, public System::IEquatable_1<System::Security::Cryptography::HashAlgorithmName> {
    public:
    // private readonly System.String _name
    // Offset: 0x0
    ::Il2CppString* name;
    // Creating value type constructor for type: HashAlgorithmName
    constexpr HashAlgorithmName(::Il2CppString* name_ = {}) noexcept : name{name_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return name;
    }
    // static public System.Security.Cryptography.HashAlgorithmName get_SHA256()
    // Offset: 0x1778160
    static System::Security::Cryptography::HashAlgorithmName get_SHA256();
    // public System.Void .ctor(System.String name)
    // Offset: 0xC7768C
    // ABORTED: conflicts with another method.  HashAlgorithmName(::Il2CppString* name);
    // public System.String get_Name()
    // Offset: 0xC77694
    ::Il2CppString* get_Name();
    // public override System.String ToString()
    // Offset: 0xC7769C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC776F8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.Security.Cryptography.HashAlgorithmName other)
    // Offset: 0xC77700
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.Security.Cryptography.HashAlgorithmName other)
    bool Equals(System::Security::Cryptography::HashAlgorithmName other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC7770C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Security.Cryptography.HashAlgorithmName
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HashAlgorithmName, "System.Security.Cryptography", "HashAlgorithmName");
#pragma pack(pop)