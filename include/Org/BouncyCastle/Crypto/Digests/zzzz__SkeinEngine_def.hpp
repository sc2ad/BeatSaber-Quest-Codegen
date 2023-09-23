#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Engines {
class ThreefishEngine;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration;
}
namespace Org::BouncyCastle::Crypto::Digests {
class Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter;
}
namespace Org::BouncyCastle::Crypto::Digests {
class Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI;
}
namespace Org::BouncyCastle::Crypto::Digests {
class Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak;
}
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinEngine;
}
// Type: ::Configuration
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(777))
// CS Name: Org.BouncyCastle.Crypto.Digests.SkeinEngine::Configuration
class CORDL_TYPE Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration(Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration(Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration& operator=(Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration& operator=(Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_bytes, put=__set_bytes))  bytes;

constexpr void __set_bytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_bytes() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Bytes))  Bytes;


// Methods

// Ctor Parameters [CppParam { name: "outputSizeBits", ty: "int64_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration(int64_t outputSizeBits) ;

/// @brief Method .ctor addr 0xe1aba8 size 0x148 virtual false final false
 void _ctor(int64_t outputSizeBits) ;

/// @brief Method get_Bytes addr 0xe1b158 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Bytes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
// Type: ::Parameter
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(778))
// CS Name: Org.BouncyCastle.Crypto.Digests.SkeinEngine::Parameter
class CORDL_TYPE Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter(Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter(Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter& operator=(Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter& operator=(Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(int32_t value) ;

constexpr int32_t __get_type() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_value() const;


// Properties

 int32_t __declspec(property(get=get_Type))  Type;

 ::ArrayW<uint8_t> __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter(int32_t type, ::ArrayW<uint8_t> value) ;

/// @brief Method .ctor addr 0xe1ab28 size 0x30 virtual false final false
 void _ctor(int32_t type, ::ArrayW<uint8_t> value) ;

/// @brief Method get_Type addr 0xe1b160 size 0x8 virtual false final false
 int32_t get_Type() ;

/// @brief Method get_Value addr 0xe1b168 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
// Type: ::UbiTweak
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(779))
// CS Name: Org.BouncyCastle.Crypto.Digests.SkeinEngine::UbiTweak
class CORDL_TYPE Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak(Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak(Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak& operator=(Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak& operator=(Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak const& o) noexcept = default;
                


// Fields

/// @brief Field LOW_RANGE offset 0
static constexpr uint64_t  LOW_RANGE{18446744069414584320u};

/// @brief Field T1_FINAL offset 0
static constexpr uint64_t  T1_FINAL{9223372036854775808u};

/// @brief Field T1_FIRST offset 0
static constexpr uint64_t  T1_FIRST{4611686018427387904u};

 ::ArrayW<uint64_t> __declspec(property(get=__get_tweak, put=__set_tweak))  tweak;

constexpr void __set_tweak(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_tweak() const;

 bool __declspec(property(get=__get_extendedPosition, put=__set_extendedPosition))  extendedPosition;

constexpr void __set_extendedPosition(bool value) ;

constexpr bool __get_extendedPosition() const;


// Properties

 uint32_t __declspec(property(get=get_Type, put=set_Type))  Type;

 bool __declspec(property(get=get_First, put=set_First))  First;

 bool __declspec(property(get=get_Final, put=set_Final))  Final;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak() ;

/// @brief Method .ctor addr 0xe1b170 size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0xe1b20c size 0x88 virtual false final false
 void Reset(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak tweak) ;

/// @brief Method Reset addr 0xe1b1d0 size 0x3c virtual false final false
 void Reset() ;

/// @brief Method get_Type addr 0xe1b2d4 size 0x30 virtual false final false
 uint32_t get_Type() ;

/// @brief Method set_Type addr 0xe1b304 size 0x3c virtual false final false
 void set_Type(uint32_t value) ;

/// @brief Method get_First addr 0xe1b340 size 0x30 virtual false final false
 bool get_First() ;

/// @brief Method set_First addr 0xe1b294 size 0x40 virtual false final false
 void set_First(bool value) ;

/// @brief Method get_Final addr 0xe1b370 size 0x30 virtual false final false
 bool get_Final() ;

/// @brief Method set_Final addr 0xe1b3a0 size 0x40 virtual false final false
 void set_Final(bool value) ;

/// @brief Method AdvancePosition addr 0xe1b3e0 size 0x160 virtual false final false
 void AdvancePosition(int32_t advance) ;

/// @brief Method GetWords addr 0xe1b540 size 0x8 virtual false final false
 ::ArrayW<uint64_t> GetWords() ;

/// @brief Method ToString addr 0xe1b548 size 0x208 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
// Type: ::UBI
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(780))
// CS Name: Org.BouncyCastle.Crypto.Digests.SkeinEngine::UBI
class CORDL_TYPE Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI(Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI(Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI& operator=(Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI& operator=(Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak __declspec(property(get=__get_tweak, put=__set_tweak))  tweak;

constexpr void __set_tweak(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak value) ;

constexpr Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak __get_tweak() const;

 Org::BouncyCastle::Crypto::Digests::SkeinEngine __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::Digests::SkeinEngine value) ;

constexpr Org::BouncyCastle::Crypto::Digests::SkeinEngine __get_engine() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_currentBlock, put=__set_currentBlock))  currentBlock;

constexpr void __set_currentBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_currentBlock() const;

 int32_t __declspec(property(get=__get_currentOffset, put=__set_currentOffset))  currentOffset;

constexpr void __set_currentOffset(int32_t value) ;

constexpr int32_t __get_currentOffset() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_message() const;


// Methods

// Ctor Parameters [CppParam { name: "engine", ty: "Org::BouncyCastle::Crypto::Digests::SkeinEngine", modifiers: "", def_value: None }, CppParam { name: "blockSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI(Org::BouncyCastle::Crypto::Digests::SkeinEngine engine, int32_t blockSize) ;

/// @brief Method .ctor addr 0xe19e50 size 0xd8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::SkeinEngine engine, int32_t blockSize) ;

/// @brief Method Reset addr 0xe1a02c size 0xac virtual false final false
 void Reset(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI ubi) ;

/// @brief Method Reset addr 0xe1ae38 size 0x40 virtual false final false
 void Reset(int32_t type) ;

/// @brief Method Update addr 0xe1acf0 size 0x128 virtual false final false
 void Update(::ArrayW<uint8_t> value, int32_t offset, int32_t len, ::ArrayW<uint64_t> output) ;

/// @brief Method ProcessBlock addr 0xe1b750 size 0x170 virtual false final false
 void ProcessBlock(::ArrayW<uint64_t> output) ;

/// @brief Method DoFinal addr 0xe1ae78 size 0x70 virtual false final false
 void DoFinal(::ArrayW<uint64_t> output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
// Type: Org.BouncyCastle.Crypto.Digests::SkeinEngine
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(781))
// CS Name: Org.BouncyCastle.Crypto.Digests.SkeinEngine
class CORDL_TYPE SkeinEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UBI = Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI;

using UbiTweak = Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak;

using Parameter = Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter;

using Configuration = Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SkeinEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "SkeinEngine", modifiers: " const&", def_value: None }]
constexpr SkeinEngine(SkeinEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SkeinEngine", modifiers: "&&", def_value: None }]
constexpr SkeinEngine(SkeinEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SkeinEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SkeinEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SkeinEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SkeinEngine& operator=(SkeinEngine&& o) noexcept = default;
  constexpr SkeinEngine& operator=(SkeinEngine const& o) noexcept = default;
                


// Fields

/// @brief Field SKEIN_256 offset 0
static constexpr int32_t  SKEIN_256{256};

/// @brief Field SKEIN_512 offset 0
static constexpr int32_t  SKEIN_512{512};

/// @brief Field SKEIN_1024 offset 0
static constexpr int32_t  SKEIN_1024{1024};

/// @brief Field PARAM_TYPE_KEY offset 0
static constexpr int32_t  PARAM_TYPE_KEY{0};

/// @brief Field PARAM_TYPE_CONFIG offset 0
static constexpr int32_t  PARAM_TYPE_CONFIG{4};

/// @brief Field PARAM_TYPE_MESSAGE offset 0
static constexpr int32_t  PARAM_TYPE_MESSAGE{48};

/// @brief Field PARAM_TYPE_OUTPUT offset 0
static constexpr int32_t  PARAM_TYPE_OUTPUT{63};

static System::Collections::IDictionary __declspec(property(get=__get_INITIAL_STATES, put=__set_INITIAL_STATES))  INITIAL_STATES;

static void __set_INITIAL_STATES(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_INITIAL_STATES() ;

 Org::BouncyCastle::Crypto::Engines::ThreefishEngine __declspec(property(get=__get_threefish, put=__set_threefish))  threefish;

constexpr void __set_threefish(Org::BouncyCastle::Crypto::Engines::ThreefishEngine value) ;

constexpr Org::BouncyCastle::Crypto::Engines::ThreefishEngine __get_threefish() const;

 int32_t __declspec(property(get=__get_outputSizeBytes, put=__set_outputSizeBytes))  outputSizeBytes;

constexpr void __set_outputSizeBytes(int32_t value) ;

constexpr int32_t __get_outputSizeBytes() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_chain, put=__set_chain))  chain;

constexpr void __set_chain(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_chain() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_initialState, put=__set_initialState))  initialState;

constexpr void __set_initialState(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_initialState() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_key() const;

 ::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> __declspec(property(get=__get_preMessageParameters, put=__set_preMessageParameters))  preMessageParameters;

constexpr void __set_preMessageParameters(::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> __get_preMessageParameters() const;

 ::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> __declspec(property(get=__get_postMessageParameters, put=__set_postMessageParameters))  postMessageParameters;

constexpr void __set_postMessageParameters(::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> __get_postMessageParameters() const;

 Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI __declspec(property(get=__get_ubi, put=__set_ubi))  ubi;

constexpr void __set_ubi(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI value) ;

constexpr Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI __get_ubi() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_singleByte, put=__set_singleByte))  singleByte;

constexpr void __set_singleByte(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_singleByte() const;


// Properties

 int32_t __declspec(property(get=get_OutputSize))  OutputSize;

 int32_t __declspec(property(get=get_BlockSize))  BlockSize;


// Methods

/// @brief Method InitialState addr 0xe19d08 size 0x140 virtual false final false
static void InitialState(int32_t blockSize, int32_t outputSize, ::ArrayW<uint64_t> state) ;

/// @brief Method VariantIdentifier addr 0xe19e48 size 0x8 virtual false final false
static int32_t VariantIdentifier(int32_t blockSizeBytes, int32_t outputSizeBytes) ;

// Ctor Parameters [CppParam { name: "blockSizeBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "outputSizeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit SkeinEngine(int32_t blockSizeBits, int32_t outputSizeBits) ;

/// @brief Method .ctor addr 0xe18fcc size 0x190 virtual false final false
 void _ctor(int32_t blockSizeBits, int32_t outputSizeBits) ;

// Ctor Parameters [CppParam { name: "engine", ty: "Org::BouncyCastle::Crypto::Digests::SkeinEngine", modifiers: "", def_value: None }]
explicit SkeinEngine(Org::BouncyCastle::Crypto::Digests::SkeinEngine engine) ;

/// @brief Method .ctor addr 0xe191ec size 0x58 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::SkeinEngine engine) ;

/// @brief Method CopyIn addr 0xe19f28 size 0x104 virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::SkeinEngine engine) ;

/// @brief Method Clone addr 0xe1a0d8 size 0xa0 virtual false final false
static ::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> Clone(::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> data, ::ArrayW<Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter> existing) ;

/// @brief Method Copy addr 0xe1a178 size 0x60 virtual true final true
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe192d0 size 0x124 virtual true final true
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

/// @brief Method get_OutputSize addr 0xe1a1d8 size 0x8 virtual false final false
 int32_t get_OutputSize() ;

/// @brief Method get_BlockSize addr 0xe19618 size 0x24 virtual false final false
 int32_t get_BlockSize() ;

/// @brief Method Init addr 0xe19684 size 0xb8 virtual false final false
 void Init(Org::BouncyCastle::Crypto::Parameters::SkeinParameters parameters) ;

/// @brief Method InitParams addr 0xe1a1e0 size 0x678 virtual false final false
 void InitParams(System::Collections::IDictionary parameters) ;

/// @brief Method CreateInitialState addr 0xe1a858 size 0x2b8 virtual false final false
 void CreateInitialState() ;

/// @brief Method Reset addr 0xe19754 size 0x40 virtual false final false
 void Reset() ;

/// @brief Method UbiComplete addr 0xe1ab58 size 0x50 virtual false final false
 void UbiComplete(int32_t type, ::ArrayW<uint8_t> value) ;

/// @brief Method UbiInit addr 0xe1ab10 size 0x18 virtual false final false
 void UbiInit(int32_t type) ;

/// @brief Method UbiFinal addr 0xe1ae18 size 0x20 virtual false final false
 void UbiFinal() ;

/// @brief Method CheckInitialised addr 0xe1aee8 size 0x60 virtual false final false
 void CheckInitialised() ;

/// @brief Method Update addr 0xe197ac size 0x34 virtual false final false
 void Update(uint8_t inByte) ;

/// @brief Method Update addr 0xe197f8 size 0x4c virtual false final false
 void Update(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe1985c size 0x1c8 virtual false final false
 int32_t DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Output addr 0xe1af48 size 0x210 virtual false final false
 void Output(uint64_t outputSequence, ::ArrayW<uint8_t> outBytes, int32_t outOff, int32_t outputBytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Configuration, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine/Configuration");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__Parameter, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine/Parameter");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UBI, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine/UBI");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Org__BouncyCastle__Crypto__Digests__SkeinEngine__UbiTweak, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine/UbiTweak");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::SkeinEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::SkeinEngine, "Org.BouncyCastle.Crypto.Digests", "SkeinEngine");
