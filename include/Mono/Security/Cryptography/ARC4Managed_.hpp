// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.RC4
#include "Mono/Security/Cryptography/RC4_.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: ARC4Managed
  class ARC4Managed_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::ARC4Managed_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::ARC4Managed_*, "Mono.Security.Cryptography", "ARC4Managed");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x5B
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.ARC4Managed
  // [TokenAttribute] Offset: FFFFFFFF
  class ARC4Managed_ : public ::Mono::Security::Cryptography::RC4_/*, public ::System::Security::Cryptography::ICryptoTransform*/ {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    public:
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> key;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] state
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> state;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte x
    // Size: 0x1
    // Offset: 0x58
    uint8_t x;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte y
    // Size: 0x1
    // Offset: 0x59
    uint8_t y;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x5A
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Security::Cryptography::ICryptoTransform
    operator ::System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<::System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // Creating interface conversion operator: i_ICryptoTransform
    inline ::System::Security::Cryptography::ICryptoTransform* i_ICryptoTransform() noexcept {
      return reinterpret_cast<::System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // Get instance field reference: private System.Byte[] key
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_key();
    // Get instance field reference: private System.Byte[] state
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_state();
    // Get instance field reference: private System.Byte x
    [[deprecated("Use field access instead!")]] uint8_t& dyn_x();
    // Get instance field reference: private System.Byte y
    [[deprecated("Use field access instead!")]] uint8_t& dyn_y();
    // Get instance field reference: private System.Boolean m_disposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_disposed();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x1FEF12C
    bool get_CanTransformMultipleBlocks();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x1FEF134
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x1FEF13C
    int get_OutputBlockSize();
    // private System.Void KeySetup(System.Byte[] key)
    // Offset: 0x1FEEECC
    void KeySetup(::ArrayW<uint8_t> key);
    // private System.Void CheckInput(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1FEF144
    void CheckInput(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1FEF29C
    int TransformBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ::ArrayW<uint8_t> outputBuffer, int outputOffset);
    // private System.Int32 InternalTransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1FEF418
    int InternalTransformBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ::ArrayW<uint8_t> outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1FEF570
    ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // public override System.Byte[] get_Key()
    // Offset: 0x1FEED58
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::ArrayW<uint8_t> get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x1FEEDF4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::ArrayW<uint8_t> value);
    // public System.Void .ctor()
    // Offset: 0x1FEEB0C
    // Implemented from: Mono.Security.Cryptography.RC4
    // Base method: System.Void RC4_::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ARC4Managed_* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::ARC4Managed_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ARC4Managed_*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1FEEC28
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1FEEC9C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    // Offset: 0x1FEEFC0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgvIV);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    // Offset: 0x1FEEFEC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgvIV);
    // public override System.Void GenerateIV()
    // Offset: 0x1FEF024
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
    // public override System.Void GenerateKey()
    // Offset: 0x1FEF088
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
  }; // Mono.Security.Cryptography.ARC4Managed
  #pragma pack(pop)
  static check_size<sizeof(ARC4Managed_), 90 + sizeof(bool)> __Mono_Security_Cryptography_ARC4Managed_SizeCheck;
  static_assert(sizeof(ARC4Managed_) == 0x5B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::ARC4Managed_::*)()>(&Mono::Security::Cryptography::ARC4Managed_::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::ARC4Managed_::*)()>(&Mono::Security::Cryptography::ARC4Managed_::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::ARC4Managed_::*)()>(&Mono::Security::Cryptography::ARC4Managed_::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::KeySetup
// Il2CppName: KeySetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed_::*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::ARC4Managed_::KeySetup)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "KeySetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::CheckInput
// Il2CppName: CheckInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed_::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::ARC4Managed_::CheckInput)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "CheckInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::ARC4Managed_::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::ARC4Managed_::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::InternalTransformBlock
// Il2CppName: InternalTransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::ARC4Managed_::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::ARC4Managed_::InternalTransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "InternalTransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::ARC4Managed_::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::ARC4Managed_::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::ARC4Managed_::*)()>(&Mono::Security::Cryptography::ARC4Managed_::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed_::*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::ARC4Managed_::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed_::*)()>(&Mono::Security::Cryptography::ARC4Managed_::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed_::*)(bool)>(&Mono::Security::Cryptography::ARC4Managed_::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::CreateEncryptor
// Il2CppName: CreateEncryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (Mono::Security::Cryptography::ARC4Managed_::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::ARC4Managed_::CreateEncryptor)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgvIV = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "CreateEncryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey, rgvIV});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::CreateDecryptor
// Il2CppName: CreateDecryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (Mono::Security::Cryptography::ARC4Managed_::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::ARC4Managed_::CreateDecryptor)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgvIV = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "CreateDecryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey, rgvIV});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::GenerateIV
// Il2CppName: GenerateIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed_::*)()>(&Mono::Security::Cryptography::ARC4Managed_::GenerateIV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "GenerateIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed_::GenerateKey
// Il2CppName: GenerateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed_::*)()>(&Mono::Security::Cryptography::ARC4Managed_::GenerateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed_*), "GenerateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
