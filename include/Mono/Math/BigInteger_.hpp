// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Mono.Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Math::BigInteger_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::BigInteger_*, "Mono.Math", "BigInteger");
// Type namespace: Mono.Math
namespace Mono::Math {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.BigInteger
  // [TokenAttribute] Offset: FFFFFFFF
  class BigInteger_ : public ::Il2CppObject {
    public:
    // Nested type: ::Mono::Math::BigInteger_::Sign
    struct Sign;
    // Nested type: ::Mono::Math::BigInteger_::ModulusRing
    class ModulusRing;
    // Nested type: ::Mono::Math::BigInteger_::Kernel
    class Kernel;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Mono.Math.BigInteger/Mono.Math.Sign
    // [TokenAttribute] Offset: FFFFFFFF
    struct Sign/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Sign
      constexpr Sign(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Mono.Math.BigInteger/Mono.Math.Sign Negative
      static constexpr const int Negative = -1;
      // Get static field: static public Mono.Math.BigInteger/Mono.Math.Sign Negative
      static ::Mono::Math::BigInteger_::Sign _get_Negative();
      // Set static field: static public Mono.Math.BigInteger/Mono.Math.Sign Negative
      static void _set_Negative(::Mono::Math::BigInteger_::Sign value);
      // static field const value: static public Mono.Math.BigInteger/Mono.Math.Sign Zero
      static constexpr const int Zero = 0;
      // Get static field: static public Mono.Math.BigInteger/Mono.Math.Sign Zero
      static ::Mono::Math::BigInteger_::Sign _get_Zero();
      // Set static field: static public Mono.Math.BigInteger/Mono.Math.Sign Zero
      static void _set_Zero(::Mono::Math::BigInteger_::Sign value);
      // static field const value: static public Mono.Math.BigInteger/Mono.Math.Sign Positive
      static constexpr const int Positive = 1;
      // Get static field: static public Mono.Math.BigInteger/Mono.Math.Sign Positive
      static ::Mono::Math::BigInteger_::Sign _get_Positive();
      // Set static field: static public Mono.Math.BigInteger/Mono.Math.Sign Positive
      static void _set_Positive(::Mono::Math::BigInteger_::Sign value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Mono.Math.BigInteger/Mono.Math.Sign
    #pragma pack(pop)
    static check_size<sizeof(BigInteger_::Sign), 0 + sizeof(int)> __Mono_Math_BigInteger__SignSizeCheck;
    static_assert(sizeof(BigInteger_::Sign) == 0x4);
    public:
    // private System.UInt32 length
    // Size: 0x4
    // Offset: 0x10
    uint length;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: length and: data
    char __padding0[0x4] = {};
    // private System.UInt32[] data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Get static field: static readonly System.UInt32[] smallPrimes
    static ::ArrayW<uint> _get_smallPrimes();
    // Set static field: static readonly System.UInt32[] smallPrimes
    static void _set_smallPrimes(::ArrayW<uint> value);
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static ::System::Security::Cryptography::RandomNumberGenerator* _get_rng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static void _set_rng(::System::Security::Cryptography::RandomNumberGenerator* value);
    // Get instance field reference: private System.UInt32 length
    [[deprecated("Use field access instead!")]] uint& dyn_length();
    // Get instance field reference: private System.UInt32[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_data();
    // static private System.Security.Cryptography.RandomNumberGenerator get_Rng()
    // Offset: 0x1FD2208
    static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng();
    // public System.Void .ctor(Mono.Math.BigInteger/Mono.Math.Sign sign, System.UInt32 len)
    // Offset: 0x1FD0830
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger_* New_ctor(::Mono::Math::BigInteger_::Sign sign, uint len) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::BigInteger_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger_*, creationType>(sign, len)));
    }
    // public System.Void .ctor(Mono.Math.BigInteger bi)
    // Offset: 0x1FD08AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger_* New_ctor(::Mono::Math::BigInteger_* bi) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::BigInteger_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger_*, creationType>(bi)));
    }
    // public System.Void .ctor(Mono.Math.BigInteger bi, System.UInt32 len)
    // Offset: 0x1FD095C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger_* New_ctor(::Mono::Math::BigInteger_* bi, uint len) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::BigInteger_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger_*, creationType>(bi, len)));
    }
    // public System.Void .ctor(System.Byte[] inData)
    // Offset: 0x1FD0A44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger_* New_ctor(::ArrayW<uint8_t> inData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::BigInteger_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger_*, creationType>(inData)));
    }
    // public System.Void .ctor(System.UInt32 ui)
    // Offset: 0x1FD0D38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger_* New_ctor(uint ui) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::BigInteger_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger_*, creationType>(ui)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1FD3D74
    static void _cctor();
    // static public Mono.Math.BigInteger GenerateRandom(System.Int32 bits, System.Security.Cryptography.RandomNumberGenerator rng)
    // Offset: 0x1FD22D0
    static ::Mono::Math::BigInteger_* GenerateRandom(int bits, ::System::Security::Cryptography::RandomNumberGenerator* rng);
    // static public Mono.Math.BigInteger GenerateRandom(System.Int32 bits)
    // Offset: 0x1FD2458
    static ::Mono::Math::BigInteger_* GenerateRandom(int bits);
    // public System.Void Randomize(System.Security.Cryptography.RandomNumberGenerator rng)
    // Offset: 0x1FD24C4
    void Randomize(::System::Security::Cryptography::RandomNumberGenerator* rng);
    // public System.Void Randomize()
    // Offset: 0x1FD2700
    void Randomize();
    // public System.Int32 BitCount()
    // Offset: 0x1FD2680
    int BitCount();
    // public System.Boolean TestBit(System.UInt32 bitNum)
    // Offset: 0x1FD276C
    bool TestBit(uint bitNum);
    // public System.Boolean TestBit(System.Int32 bitNum)
    // Offset: 0x1FD27BC
    bool TestBit(int bitNum);
    // public System.Void SetBit(System.UInt32 bitNum)
    // Offset: 0x1FD288C
    void SetBit(uint bitNum);
    // public System.Void SetBit(System.UInt32 bitNum, System.Boolean value)
    // Offset: 0x1FD2894
    void SetBit(uint bitNum, bool value);
    // public System.Int32 LowestSetBit()
    // Offset: 0x1FD28FC
    int LowestSetBit();
    // public System.Byte[] GetBytes()
    // Offset: 0x1FD2988
    ::ArrayW<uint8_t> GetBytes();
    // public System.String ToString(System.UInt32 radix)
    // Offset: 0x1FD2D48
    ::StringW ToString(uint radix);
    // public System.String ToString(System.UInt32 radix, System.String characterSet)
    // Offset: 0x1FD2DA8
    ::StringW ToString(uint radix, ::StringW characterSet);
    // private System.Void Normalize()
    // Offset: 0x1FD0CD4
    void Normalize();
    // public System.Void Clear()
    // Offset: 0x1FD302C
    void Clear();
    // public Mono.Math.BigInteger ModInverse(Mono.Math.BigInteger modulus)
    // Offset: 0x1FD3248
    ::Mono::Math::BigInteger_* ModInverse(::Mono::Math::BigInteger_* modulus);
    // public Mono.Math.BigInteger ModPow(Mono.Math.BigInteger exp, Mono.Math.BigInteger n)
    // Offset: 0x1FD3770
    ::Mono::Math::BigInteger_* ModPow(::Mono::Math::BigInteger_* exp, ::Mono::Math::BigInteger_* n);
    // public System.Boolean IsProbablePrime()
    // Offset: 0x1FD39F8
    bool IsProbablePrime();
    // static public Mono.Math.BigInteger GeneratePseudoPrime(System.Int32 bits)
    // Offset: 0x1FD3C28
    static ::Mono::Math::BigInteger_* GeneratePseudoPrime(int bits);
    // public System.Void Incr2()
    // Offset: 0x1FD3CA4
    void Incr2();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1FD3088
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1FD30EC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1FD30F4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
  }; // Mono.Math.BigInteger
  #pragma pack(pop)
  static check_size<sizeof(BigInteger_), 24 + sizeof(::ArrayW<uint>)> __Mono_Math_BigInteger_SizeCheck;
  static_assert(sizeof(BigInteger_) == 0x20);
  // static public Mono.Math.BigInteger op_Subtraction(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD0ED0
  ::Mono::Math::BigInteger_* operator-(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public System.UInt32 op_Modulus(Mono.Math.BigInteger bi, System.UInt32 ui)
  // Offset: 0x1FD13DC
  uint operator%(::Mono::Math::BigInteger_& bi, const uint& ui);
  // static public Mono.Math.BigInteger op_Modulus(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD1458
  ::Mono::Math::BigInteger_* operator%(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public Mono.Math.BigInteger op_Division(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD1964
  ::Mono::Math::BigInteger_* operator/(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public Mono.Math.BigInteger op_Multiply(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD1998
  ::Mono::Math::BigInteger_* operator*(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public Mono.Math.BigInteger op_Multiply(Mono.Math.BigInteger bi, System.Int32 i)
  // Offset: 0x1FD1C58
  ::Mono::Math::BigInteger_* operator*(::Mono::Math::BigInteger_& bi, const int& i);
  // static public Mono.Math.BigInteger op_LeftShift(Mono.Math.BigInteger bi1, System.Int32 shiftVal)
  // Offset: 0x1FD1E6C
  ::Mono::Math::BigInteger_* operator<<(::Mono::Math::BigInteger_& bi1, const int& shiftVal);
  // static public Mono.Math.BigInteger op_RightShift(Mono.Math.BigInteger bi1, System.Int32 shiftVal)
  // Offset: 0x1FD2054
  ::Mono::Math::BigInteger_* operator>>(::Mono::Math::BigInteger_& bi1, const int& shiftVal);
  // static public System.Boolean op_Equality(Mono.Math.BigInteger bi1, System.UInt32 ui)
  // Offset: 0x1FD1050
  bool operator ==(::Mono::Math::BigInteger_& bi1, const uint& ui);
  // static public System.Boolean op_Inequality(Mono.Math.BigInteger bi1, System.UInt32 ui)
  // Offset: 0x1FD2AC4
  bool operator !=(::Mono::Math::BigInteger_& bi1, const uint& ui);
  // static public System.Boolean op_Equality(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD2B3C
  bool operator ==(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public System.Boolean op_Inequality(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD2C0C
  bool operator !=(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public System.Boolean op_GreaterThan(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD2CDC
  bool operator >(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public System.Boolean op_LessThan(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD2CF8
  bool operator <(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public System.Boolean op_GreaterThanOrEqual(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD2D10
  bool operator >=(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
  // static public System.Boolean op_LessThanOrEqual(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
  // Offset: 0x1FD2D2C
  bool operator <=(::Mono::Math::BigInteger_* bi1, ::Mono::Math::BigInteger_& bi2);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::BigInteger_::Sign, "Mono.Math", "BigInteger/Sign");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::BigInteger_::get_Rng
// Il2CppName: get_Rng
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (*)()>(&Mono::Math::BigInteger_::get_Rng)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "get_Rng", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Math::BigInteger_::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::GenerateRandom
// Il2CppName: GenerateRandom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (*)(int, ::System::Security::Cryptography::RandomNumberGenerator*)>(&Mono::Math::BigInteger_::GenerateRandom)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rng = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RandomNumberGenerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "GenerateRandom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits, rng});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::GenerateRandom
// Il2CppName: GenerateRandom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (*)(int)>(&Mono::Math::BigInteger_::GenerateRandom)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "GenerateRandom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::Randomize
// Il2CppName: Randomize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger_::*)(::System::Security::Cryptography::RandomNumberGenerator*)>(&Mono::Math::BigInteger_::Randomize)> {
  static const MethodInfo* get() {
    static auto* rng = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RandomNumberGenerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "Randomize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rng});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::Randomize
// Il2CppName: Randomize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::Randomize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "Randomize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::BitCount
// Il2CppName: BitCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::BitCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "BitCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::TestBit
// Il2CppName: TestBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::BigInteger_::*)(uint)>(&Mono::Math::BigInteger_::TestBit)> {
  static const MethodInfo* get() {
    static auto* bitNum = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "TestBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitNum});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::TestBit
// Il2CppName: TestBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::BigInteger_::*)(int)>(&Mono::Math::BigInteger_::TestBit)> {
  static const MethodInfo* get() {
    static auto* bitNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "TestBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitNum});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::SetBit
// Il2CppName: SetBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger_::*)(uint)>(&Mono::Math::BigInteger_::SetBit)> {
  static const MethodInfo* get() {
    static auto* bitNum = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "SetBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitNum});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::SetBit
// Il2CppName: SetBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger_::*)(uint, bool)>(&Mono::Math::BigInteger_::SetBit)> {
  static const MethodInfo* get() {
    static auto* bitNum = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "SetBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitNum, value});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::LowestSetBit
// Il2CppName: LowestSetBit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::LowestSetBit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "LowestSetBit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Math::BigInteger_::*)(uint)>(&Mono::Math::BigInteger_::ToString)> {
  static const MethodInfo* get() {
    static auto* radix = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radix});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Math::BigInteger_::*)(uint, ::StringW)>(&Mono::Math::BigInteger_::ToString)> {
  static const MethodInfo* get() {
    static auto* radix = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* characterSet = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radix, characterSet});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::Normalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ModInverse
// Il2CppName: ModInverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::BigInteger_::*)(::Mono::Math::BigInteger_*)>(&Mono::Math::BigInteger_::ModInverse)> {
  static const MethodInfo* get() {
    static auto* modulus = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "ModInverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{modulus});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ModPow
// Il2CppName: ModPow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::BigInteger_::*)(::Mono::Math::BigInteger_*, ::Mono::Math::BigInteger_*)>(&Mono::Math::BigInteger_::ModPow)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "ModPow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp, n});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::IsProbablePrime
// Il2CppName: IsProbablePrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::IsProbablePrime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "IsProbablePrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::GeneratePseudoPrime
// Il2CppName: GeneratePseudoPrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (*)(int)>(&Mono::Math::BigInteger_::GeneratePseudoPrime)> {
  static const MethodInfo* get() {
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "GeneratePseudoPrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bits});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::Incr2
// Il2CppName: Incr2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::Incr2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "Incr2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Math::BigInteger_::*)()>(&Mono::Math::BigInteger_::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Math::BigInteger_::*)(::Il2CppObject*)>(&Mono::Math::BigInteger_::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator%
// Il2CppName: op_Modulus
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator%
// Il2CppName: op_Modulus
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator<<
// Il2CppName: op_LeftShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator>>
// Il2CppName: op_RightShift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
