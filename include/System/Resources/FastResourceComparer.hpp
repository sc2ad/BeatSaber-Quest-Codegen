// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: FastResourceComparer
  class FastResourceComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::FastResourceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::FastResourceComparer*, "System.Resources", "FastResourceComparer");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.FastResourceComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class FastResourceComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::StringW>, public ::System::Collections::Generic::IEqualityComparer_1<::StringW>, public ::System::Collections::IEqualityComparer, public ::System::Collections::IComparer*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::StringW>
    operator ::System::Collections::Generic::IComparer_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::StringW>*>(this);
    }
    // Creating interface conversion operator: i_StringW
    inline ::System::Collections::Generic::IComparer_1<::StringW>* i_StringW() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IComparer_1<::StringW>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>
    operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEqualityComparer_1<::StringW>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IEqualityComparer
    operator ::System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IEqualityComparer*>(this);
    }
    // Creating interface conversion operator: i_IEqualityComparer
    inline ::System::Collections::IEqualityComparer* i_IEqualityComparer() noexcept {
      return reinterpret_cast<::System::Collections::IEqualityComparer*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IComparer
    operator ::System::Collections::IComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Creating interface conversion operator: i_IComparer
    inline ::System::Collections::IComparer* i_IComparer() noexcept {
      return reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Get static field: static readonly System.Resources.FastResourceComparer Default
    static ::System::Resources::FastResourceComparer* _get_Default();
    // Set static field: static readonly System.Resources.FastResourceComparer Default
    static void _set_Default(::System::Resources::FastResourceComparer* value);
    // static private System.Void .cctor()
    // Offset: 0x1E00924
    static void _cctor();
    // public System.Int32 GetHashCode(System.Object key)
    // Offset: 0x1E0044C
    int GetHashCode(::Il2CppObject* key);
    // public System.Int32 GetHashCode(System.String key)
    // Offset: 0x1E00554
    int GetHashCode(::StringW key);
    // static System.Int32 HashFunction(System.String key)
    // Offset: 0x1E004DC
    static int HashFunction(::StringW key);
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x1E005B8
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 Compare(System.String a, System.String b)
    // Offset: 0x1E00668
    int Compare(::StringW a, ::StringW b);
    // public System.Boolean Equals(System.String a, System.String b)
    // Offset: 0x1E00678
    bool Equals(::StringW a, ::StringW b);
    // public System.Boolean Equals(System.Object a, System.Object b)
    // Offset: 0x1E00688
    bool Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // static public System.Int32 CompareOrdinal(System.String a, System.Byte[] bytes, System.Int32 bCharLength)
    // Offset: 0x1E00738
    static int CompareOrdinal(::StringW a, ::ArrayW<uint8_t> bytes, int bCharLength);
    // static public System.Int32 CompareOrdinal(System.Byte[] bytes, System.Int32 aCharLength, System.String b)
    // Offset: 0x1E007F8
    static int CompareOrdinal(::ArrayW<uint8_t> bytes, int aCharLength, ::StringW b);
    // static System.Int32 CompareOrdinal(System.Byte* a, System.Int32 byteLen, System.String b)
    // Offset: 0x1E0087C
    static int CompareOrdinal(uint8_t* a, int byteLen, ::StringW b);
    // public System.Void .ctor()
    // Offset: 0x1E0091C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastResourceComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::FastResourceComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastResourceComparer*, creationType>()));
    }
  }; // System.Resources.FastResourceComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Resources::FastResourceComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::FastResourceComparer::*)(::Il2CppObject*)>(&System::Resources::FastResourceComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::FastResourceComparer::*)(::StringW)>(&System::Resources::FastResourceComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::HashFunction
// Il2CppName: HashFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&System::Resources::FastResourceComparer::HashFunction)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "HashFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::FastResourceComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Resources::FastResourceComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::FastResourceComparer::*)(::StringW, ::StringW)>(&System::Resources::FastResourceComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Resources::FastResourceComparer::*)(::StringW, ::StringW)>(&System::Resources::FastResourceComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Resources::FastResourceComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Resources::FastResourceComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::CompareOrdinal
// Il2CppName: CompareOrdinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::ArrayW<uint8_t>, int)>(&System::Resources::FastResourceComparer::CompareOrdinal)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bCharLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "CompareOrdinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, bytes, bCharLength});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::CompareOrdinal
// Il2CppName: CompareOrdinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int, ::StringW)>(&System::Resources::FastResourceComparer::CompareOrdinal)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* aCharLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "CompareOrdinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, aCharLength, b});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::CompareOrdinal
// Il2CppName: CompareOrdinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint8_t*, int, ::StringW)>(&System::Resources::FastResourceComparer::CompareOrdinal)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::FastResourceComparer*), "CompareOrdinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, byteLen, b});
  }
};
// Writing MetadataGetter for method: System::Resources::FastResourceComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
