// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.AceFlags
#include "System/Security/AccessControl/AceFlags.hpp"
// Including type: System.Security.AccessControl.AceType
#include "System/Security/AccessControl/AceType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: AuditFlags
  struct AuditFlags;
  // Forward declaring type: InheritanceFlags
  struct InheritanceFlags;
  // Forward declaring type: PropagationFlags
  struct PropagationFlags;
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: GenericAce
  class GenericAce;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::GenericAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::GenericAce*, "System.Security.AccessControl", "GenericAce");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.GenericAce
  // [TokenAttribute] Offset: FFFFFFFF
  class GenericAce : public ::Il2CppObject {
    public:
    public:
    // private System.Security.AccessControl.AceFlags ace_flags
    // Size: 0x1
    // Offset: 0x10
    ::System::Security::AccessControl::AceFlags ace_flags;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::AceFlags) == 0x1);
    // private System.Security.AccessControl.AceType ace_type
    // Size: 0x1
    // Offset: 0x11
    ::System::Security::AccessControl::AceType ace_type;
    // Field size check
    static_assert(sizeof(::System::Security::AccessControl::AceType) == 0x1);
    public:
    // Get instance field reference: private System.Security.AccessControl.AceFlags ace_flags
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::AceFlags& dyn_ace_flags();
    // Get instance field reference: private System.Security.AccessControl.AceType ace_type
    [[deprecated("Use field access instead!")]] ::System::Security::AccessControl::AceType& dyn_ace_type();
    // public System.Security.AccessControl.AceFlags get_AceFlags()
    // Offset: 0x1BE6C14
    ::System::Security::AccessControl::AceFlags get_AceFlags();
    // public System.Security.AccessControl.AceType get_AceType()
    // Offset: 0x1BE6C1C
    ::System::Security::AccessControl::AceType get_AceType();
    // public System.Security.AccessControl.AuditFlags get_AuditFlags()
    // Offset: 0x1BE6910
    ::System::Security::AccessControl::AuditFlags get_AuditFlags();
    // public System.Int32 get_BinaryLength()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_BinaryLength();
    // public System.Security.AccessControl.InheritanceFlags get_InheritanceFlags()
    // Offset: 0x1BE6C24
    ::System::Security::AccessControl::InheritanceFlags get_InheritanceFlags();
    // public System.Boolean get_IsInherited()
    // Offset: 0x1BE49B4
    bool get_IsInherited();
    // public System.Security.AccessControl.PropagationFlags get_PropagationFlags()
    // Offset: 0x1BE6C34
    ::System::Security::AccessControl::PropagationFlags get_PropagationFlags();
    // System.Void .ctor(System.Security.AccessControl.AceType type, System.Security.AccessControl.AceFlags flags)
    // Offset: 0x1BE6A08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericAce* New_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::GenericAce::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericAce*, creationType>(type, flags)));
    }
    // System.Void .ctor(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1BE6AB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericAce* New_ctor(::ArrayW<uint8_t> binaryForm, int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::GenericAce::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericAce*, creationType>(binaryForm, offset)));
    }
    // static public System.Security.AccessControl.GenericAce CreateFromBinaryForm(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0x1BE590C
    static ::System::Security::AccessControl::GenericAce* CreateFromBinaryForm(::ArrayW<uint8_t> binaryForm, int offset);
    // public System.Void GetBinaryForm(System.Byte[] binaryForm, System.Int32 offset)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetBinaryForm(::ArrayW<uint8_t> binaryForm, int offset);
    // static private System.Boolean IsObjectType(System.Security.AccessControl.AceType type)
    // Offset: 0x1BE6C40
    static bool IsObjectType(::System::Security::AccessControl::AceType type);
    // static System.UInt16 ReadUShort(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1BE360C
    static uint16_t ReadUShort(::ArrayW<uint8_t> buffer, int offset);
    // static System.Int32 ReadInt(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1BE3658
    static int ReadInt(::ArrayW<uint8_t> buffer, int offset);
    // static System.Void WriteInt(System.Int32 val, System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1BE3920
    static void WriteInt(int val, ::ArrayW<uint8_t> buffer, int offset);
    // static System.Void WriteUShort(System.UInt16 val, System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x1BE38CC
    static void WriteUShort(uint16_t val, ::ArrayW<uint8_t> buffer, int offset);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1BE6ED8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1BE6F68
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Security.AccessControl.GenericAce
  #pragma pack(pop)
  static check_size<sizeof(GenericAce), 17 + sizeof(::System::Security::AccessControl::AceType)> __System_Security_AccessControl_GenericAceSizeCheck;
  static_assert(sizeof(GenericAce) == 0x12);
  // static public System.Boolean op_Equality(System.Security.AccessControl.GenericAce left, System.Security.AccessControl.GenericAce right)
  // Offset: 0x1BE4BEC
  bool operator ==(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce& right);
  // static public System.Boolean op_Inequality(System.Security.AccessControl.GenericAce left, System.Security.AccessControl.GenericAce right)
  // Offset: 0x1BE47EC
  bool operator !=(::System::Security::AccessControl::GenericAce* left, ::System::Security::AccessControl::GenericAce& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::get_AceFlags
// Il2CppName: get_AceFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceFlags (System::Security::AccessControl::GenericAce::*)()>(&System::Security::AccessControl::GenericAce::get_AceFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "get_AceFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::get_AceType
// Il2CppName: get_AceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceType (System::Security::AccessControl::GenericAce::*)()>(&System::Security::AccessControl::GenericAce::get_AceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "get_AceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::get_AuditFlags
// Il2CppName: get_AuditFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AuditFlags (System::Security::AccessControl::GenericAce::*)()>(&System::Security::AccessControl::GenericAce::get_AuditFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "get_AuditFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::get_BinaryLength
// Il2CppName: get_BinaryLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::GenericAce::*)()>(&System::Security::AccessControl::GenericAce::get_BinaryLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "get_BinaryLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::get_InheritanceFlags
// Il2CppName: get_InheritanceFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::InheritanceFlags (System::Security::AccessControl::GenericAce::*)()>(&System::Security::AccessControl::GenericAce::get_InheritanceFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "get_InheritanceFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::get_IsInherited
// Il2CppName: get_IsInherited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::GenericAce::*)()>(&System::Security::AccessControl::GenericAce::get_IsInherited)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "get_IsInherited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::get_PropagationFlags
// Il2CppName: get_PropagationFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::PropagationFlags (System::Security::AccessControl::GenericAce::*)()>(&System::Security::AccessControl::GenericAce::get_PropagationFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "get_PropagationFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::CreateFromBinaryForm
// Il2CppName: CreateFromBinaryForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (*)(::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::GenericAce::CreateFromBinaryForm)> {
  static const MethodInfo* get() {
    static auto* binaryForm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "CreateFromBinaryForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryForm, offset});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::GetBinaryForm
// Il2CppName: GetBinaryForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::GenericAce::*)(::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::GenericAce::GetBinaryForm)> {
  static const MethodInfo* get() {
    static auto* binaryForm = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "GetBinaryForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binaryForm, offset});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::IsObjectType
// Il2CppName: IsObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::AccessControl::AceType)>(&System::Security::AccessControl::GenericAce::IsObjectType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "AceType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "IsObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::ReadUShort
// Il2CppName: ReadUShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::GenericAce::ReadUShort)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "ReadUShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::ReadInt
// Il2CppName: ReadInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::GenericAce::ReadInt)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "ReadInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::WriteInt
// Il2CppName: WriteInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::GenericAce::WriteInt)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "WriteInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, buffer, offset});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::WriteUShort
// Il2CppName: WriteUShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint16_t, ::ArrayW<uint8_t>, int)>(&System::Security::AccessControl::GenericAce::WriteUShort)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "WriteUShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, buffer, offset});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::AccessControl::GenericAce::*)(::Il2CppObject*)>(&System::Security::AccessControl::GenericAce::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::GenericAce::*)()>(&System::Security::AccessControl::GenericAce::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::GenericAce*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::AccessControl::GenericAce::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!