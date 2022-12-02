// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: Gost28147Engine
  class Gost28147Engine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*, "Org.BouncyCastle.Crypto.Engines", "Gost28147Engine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.Gost28147Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost28147Engine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    public:
    // private System.Int32[] workingKey
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> workingKey;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: S
    char __padding1[0x7] = {};
    // private System.Byte[] S
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> S;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IBlockCipher
    inline ::Org::BouncyCastle::Crypto::IBlockCipher* i_IBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] Sbox_Default
    static ::ArrayW<uint8_t> _get_Sbox_Default();
    // Set static field: static private readonly System.Byte[] Sbox_Default
    static void _set_Sbox_Default(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] ESbox_Test
    static ::ArrayW<uint8_t> _get_ESbox_Test();
    // Set static field: static private readonly System.Byte[] ESbox_Test
    static void _set_ESbox_Test(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] ESbox_A
    static ::ArrayW<uint8_t> _get_ESbox_A();
    // Set static field: static private readonly System.Byte[] ESbox_A
    static void _set_ESbox_A(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] ESbox_B
    static ::ArrayW<uint8_t> _get_ESbox_B();
    // Set static field: static private readonly System.Byte[] ESbox_B
    static void _set_ESbox_B(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] ESbox_C
    static ::ArrayW<uint8_t> _get_ESbox_C();
    // Set static field: static private readonly System.Byte[] ESbox_C
    static void _set_ESbox_C(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] ESbox_D
    static ::ArrayW<uint8_t> _get_ESbox_D();
    // Set static field: static private readonly System.Byte[] ESbox_D
    static void _set_ESbox_D(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] DSbox_Test
    static ::ArrayW<uint8_t> _get_DSbox_Test();
    // Set static field: static private readonly System.Byte[] DSbox_Test
    static void _set_DSbox_Test(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Byte[] DSbox_A
    static ::ArrayW<uint8_t> _get_DSbox_A();
    // Set static field: static private readonly System.Byte[] DSbox_A
    static void _set_DSbox_A(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Collections.IDictionary sBoxes
    static ::System::Collections::IDictionary* _get_sBoxes();
    // Set static field: static private readonly System.Collections.IDictionary sBoxes
    static void _set_sBoxes(::System::Collections::IDictionary* value);
    // Get instance field reference: private System.Int32[] workingKey
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_workingKey();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // Get instance field reference: private System.Byte[] S
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_S();
    // public System.String get_AlgorithmName()
    // Offset: 0x23E43A4
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x23E43EC
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x23E3B98
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x23E3F9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost28147Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::Gost28147Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost28147Engine*, creationType>()));
    }
    // static private System.Void AddSBox(System.String sBoxName, System.Byte[] sBox)
    // Offset: 0x23E3E78
    static void AddSBox(::StringW sBoxName, ::ArrayW<uint8_t> sBox);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x23E4018
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x23E43F4
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x23E43FC
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x23E476C
    void Reset();
    // private System.Int32[] generateWorkingKey(System.Boolean forEncryption, System.Byte[] userKey)
    // Offset: 0x23E4270
    ::ArrayW<int> generateWorkingKey(bool forEncryption, ::ArrayW<uint8_t> userKey);
    // private System.Int32 Gost28147_mainStep(System.Int32 n1, System.Int32 key)
    // Offset: 0x23E47F0
    int Gost28147_mainStep(int n1, int key);
    // private System.Void Gost28147Func(System.Int32[] workingKey, System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x23E4500
    void Gost28147Func(::ArrayW<int> workingKey, ::ArrayW<uint8_t> inBytes, int inOff, ::ArrayW<uint8_t> outBytes, int outOff);
    // static private System.Int32 bytesToint(System.Byte[] inBytes, System.Int32 inOff)
    // Offset: 0x23E4770
    static int bytesToint(::ArrayW<uint8_t> inBytes, int inOff);
    // static private System.Void intTobytes(System.Int32 num, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x23E48E4
    static void intTobytes(int num, ::ArrayW<uint8_t> outBytes, int outOff);
    // static public System.Byte[] GetSBox(System.String sBoxName)
    // Offset: 0x23E4970
    static ::ArrayW<uint8_t> GetSBox(::StringW sBoxName);
  }; // Org.BouncyCastle.Crypto.Engines.Gost28147Engine
  #pragma pack(pop)
  static check_size<sizeof(Gost28147Engine), 32 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Engines_Gost28147EngineSizeCheck;
  static_assert(sizeof(Gost28147Engine) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::AddSBox
// Il2CppName: AddSBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::AddSBox)> {
  static const MethodInfo* get() {
    static auto* sBoxName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sBox = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "AddSBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sBoxName, sBox});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::generateWorkingKey
// Il2CppName: generateWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(bool, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::generateWorkingKey)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* userKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "generateWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, userKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147_mainStep
// Il2CppName: Gost28147_mainStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147_mainStep)> {
  static const MethodInfo* get() {
    static auto* n1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "Gost28147_mainStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n1, key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147Func
// Il2CppName: Gost28147Func
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Gost28147Engine::*)(::ArrayW<int>, ::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::Gost28147Func)> {
  static const MethodInfo* get() {
    static auto* workingKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "Gost28147Func", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workingKey, inBytes, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::bytesToint
// Il2CppName: bytesToint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::bytesToint)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "bytesToint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::intTobytes
// Il2CppName: intTobytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::intTobytes)> {
  static const MethodInfo* get() {
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "intTobytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{num, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetSBox
// Il2CppName: GetSBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&Org::BouncyCastle::Crypto::Engines::Gost28147Engine::GetSBox)> {
  static const MethodInfo* get() {
    static auto* sBoxName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Gost28147Engine*), "GetSBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sBoxName});
  }
};
