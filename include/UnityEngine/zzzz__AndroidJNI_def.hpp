#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNI;
}
// Type: UnityEngine::AndroidJNI
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14887))
// CS Name: UnityEngine.AndroidJNI
class CORDL_TYPE AndroidJNI : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidJNI() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: " const&", def_value: None }]
constexpr AndroidJNI(AndroidJNI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "&&", def_value: None }]
constexpr AndroidJNI(AndroidJNI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJNI(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidJNI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJNI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJNI& operator=(AndroidJNI&& o) noexcept = default;
  constexpr AndroidJNI& operator=(AndroidJNI const& o) noexcept = default;
                


// Methods

/// @brief Method AttachCurrentThread addr 0x2b15e30 size 0x28 virtual false final false
static int32_t AttachCurrentThread() ;

/// @brief Method DetachCurrentThread addr 0x2b15e58 size 0x28 virtual false final false
static int32_t DetachCurrentThread() ;

/// @brief Method GetVersion addr 0x2b15e80 size 0x28 virtual false final false
static int32_t GetVersion() ;

/// @brief Method FindClass addr 0x2b08244 size 0x3c virtual false final false
static ::cordl_internals::intptr_t FindClass(::StringW name) ;

/// @brief Method FromReflectedMethod addr 0x2b08d58 size 0x3c virtual false final false
static ::cordl_internals::intptr_t FromReflectedMethod(::cordl_internals::intptr_t refMethod) ;

/// @brief Method FromReflectedField addr 0x2b15ea8 size 0x3c virtual false final false
static ::cordl_internals::intptr_t FromReflectedField(::cordl_internals::intptr_t refField) ;

/// @brief Method ToReflectedMethod addr 0x2b15ee4 size 0x54 virtual false final false
static ::cordl_internals::intptr_t ToReflectedMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, bool isStatic) ;

/// @brief Method ToReflectedField addr 0x2b15f38 size 0x54 virtual false final false
static ::cordl_internals::intptr_t ToReflectedField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, bool isStatic) ;

/// @brief Method GetSuperclass addr 0x2b15f8c size 0x3c virtual false final false
static ::cordl_internals::intptr_t GetSuperclass(::cordl_internals::intptr_t clazz) ;

/// @brief Method IsAssignableFrom addr 0x2b15fc8 size 0x44 virtual false final false
static bool IsAssignableFrom(::cordl_internals::intptr_t clazz1, ::cordl_internals::intptr_t clazz2) ;

/// @brief Method Throw addr 0x2b1600c size 0x3c virtual false final false
static int32_t Throw(::cordl_internals::intptr_t obj) ;

/// @brief Method ThrowNew addr 0x2b16048 size 0x44 virtual false final false
static int32_t ThrowNew(::cordl_internals::intptr_t clazz, ::StringW message) ;

/// @brief Method ExceptionOccurred addr 0x2b081f4 size 0x28 virtual false final false
static ::cordl_internals::intptr_t ExceptionOccurred() ;

/// @brief Method ExceptionDescribe addr 0x2b1608c size 0x28 virtual false final false
static void ExceptionDescribe() ;

/// @brief Method ExceptionClear addr 0x2b0821c size 0x28 virtual false final false
static void ExceptionClear() ;

/// @brief Method FatalError addr 0x2b160b4 size 0x3c virtual false final false
static void FatalError(::StringW message) ;

/// @brief Method PushLocalFrame addr 0x2b14dec size 0x3c virtual false final false
static int32_t PushLocalFrame(int32_t capacity) ;

/// @brief Method PopLocalFrame addr 0x2b160f0 size 0x3c virtual false final false
static ::cordl_internals::intptr_t PopLocalFrame(::cordl_internals::intptr_t ptr) ;

/// @brief Method NewGlobalRef addr 0x2b0e18c size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewGlobalRef(::cordl_internals::intptr_t obj) ;

/// @brief Method DeleteGlobalRef addr 0x2b084d0 size 0x3c virtual false final false
static void DeleteGlobalRef(::cordl_internals::intptr_t obj) ;

/// @brief Method NewWeakGlobalRef addr 0x2b10714 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewWeakGlobalRef(::cordl_internals::intptr_t obj) ;

/// @brief Method DeleteWeakGlobalRef addr 0x2b08598 size 0x3c virtual false final false
static void DeleteWeakGlobalRef(::cordl_internals::intptr_t obj) ;

/// @brief Method NewLocalRef addr 0x2b1061c size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewLocalRef(::cordl_internals::intptr_t obj) ;

/// @brief Method DeleteLocalRef addr 0x2b08660 size 0x3c virtual false final false
static void DeleteLocalRef(::cordl_internals::intptr_t obj) ;

/// @brief Method IsSameObject addr 0x2b103ec size 0x44 virtual false final false
static bool IsSameObject(::cordl_internals::intptr_t obj1, ::cordl_internals::intptr_t obj2) ;

/// @brief Method EnsureLocalCapacity addr 0x2b1612c size 0x3c virtual false final false
static int32_t EnsureLocalCapacity(int32_t capacity) ;

/// @brief Method AllocObject addr 0x2b16168 size 0x3c virtual false final false
static ::cordl_internals::intptr_t AllocObject(::cordl_internals::intptr_t clazz) ;

/// @brief Method NewObject addr 0x2b08eec size 0x54 virtual false final false
static ::cordl_internals::intptr_t NewObject(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method GetObjectClass addr 0x2b088f4 size 0x3c virtual false final false
static ::cordl_internals::intptr_t GetObjectClass(::cordl_internals::intptr_t obj) ;

/// @brief Method IsInstanceOf addr 0x2b161a4 size 0x44 virtual false final false
static bool IsInstanceOf(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t clazz) ;

/// @brief Method GetMethodID addr 0x2b08280 size 0x54 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t clazz, ::StringW name, ::StringW sig) ;

/// @brief Method GetFieldID addr 0x2b08b58 size 0x54 virtual false final false
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t clazz, ::StringW name, ::StringW sig) ;

/// @brief Method GetStaticMethodID addr 0x2b082d4 size 0x54 virtual false final false
static ::cordl_internals::intptr_t GetStaticMethodID(::cordl_internals::intptr_t clazz, ::StringW name, ::StringW sig) ;

/// @brief Method GetStaticFieldID addr 0x2b08c64 size 0x54 virtual false final false
static ::cordl_internals::intptr_t GetStaticFieldID(::cordl_internals::intptr_t clazz, ::StringW name, ::StringW sig) ;

/// @brief Method NewString addr 0x2b0873c size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewString(::StringW chars) ;

/// @brief Method NewStringFromStr addr 0x2b161e8 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewStringFromStr(::StringW chars) ;

/// @brief Method NewString addr 0x2b16224 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewString(::ArrayW<char16_t> chars) ;

/// @brief Method NewStringUTF addr 0x2b16260 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewStringUTF(::StringW bytes) ;

/// @brief Method GetStringChars addr 0x2b08818 size 0x3c virtual false final false
static ::StringW GetStringChars(::cordl_internals::intptr_t str) ;

/// @brief Method GetStringLength addr 0x2b1629c size 0x3c virtual false final false
static int32_t GetStringLength(::cordl_internals::intptr_t str) ;

/// @brief Method GetStringUTFLength addr 0x2b162d8 size 0x3c virtual false final false
static int32_t GetStringUTFLength(::cordl_internals::intptr_t str) ;

/// @brief Method GetStringUTFChars addr 0x2b16314 size 0x3c virtual false final false
static ::StringW GetStringUTFChars(::cordl_internals::intptr_t str) ;

/// @brief Method CallStringMethod addr 0x2b08328 size 0x54 virtual false final false
static ::StringW CallStringMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallObjectMethod addr 0x2b0c434 size 0x54 virtual false final false
static ::cordl_internals::intptr_t CallObjectMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallIntMethod addr 0x2b0cd64 size 0x54 virtual false final false
static int32_t CallIntMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallBooleanMethod addr 0x2b0cc58 size 0x54 virtual false final false
static bool CallBooleanMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallShortMethod addr 0x2b0ca40 size 0x54 virtual false final false
static int16_t CallShortMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallByteMethod addr 0x2b16350 size 0x54 virtual false final false
static uint8_t CallByteMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallSByteMethod addr 0x2b0cb4c size 0x54 virtual false final false
static int8_t CallSByteMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallCharMethod addr 0x2b0c5f8 size 0x54 virtual false final false
static char16_t CallCharMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallFloatMethod addr 0x2b0c828 size 0x54 virtual false final false
static float_t CallFloatMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallDoubleMethod addr 0x2b0c710 size 0x54 virtual false final false
static double_t CallDoubleMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallLongMethod addr 0x2b0c934 size 0x54 virtual false final false
static int64_t CallLongMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallVoidMethod addr 0x2b0c328 size 0x54 virtual false final false
static void CallVoidMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method GetStringField addr 0x2b0bab0 size 0x44 virtual false final false
static ::StringW GetStringField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetObjectField addr 0x2b0b9c4 size 0x44 virtual false final false
static ::cordl_internals::intptr_t GetObjectField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetBooleanField addr 0x2b0c13c size 0x44 virtual false final false
static bool GetBooleanField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetByteField addr 0x2b163a4 size 0x44 virtual false final false
static uint8_t GetByteField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetSByteField addr 0x2b0c050 size 0x44 virtual false final false
static int8_t GetSByteField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetCharField addr 0x2b0bb9c size 0x44 virtual false final false
static char16_t GetCharField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetShortField addr 0x2b0bf64 size 0x44 virtual false final false
static int16_t GetShortField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetIntField addr 0x2b0c228 size 0x44 virtual false final false
static int32_t GetIntField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetLongField addr 0x2b0be78 size 0x44 virtual false final false
static int64_t GetLongField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetFloatField addr 0x2b0bd8c size 0x44 virtual false final false
static float_t GetFloatField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetDoubleField addr 0x2b0bc94 size 0x44 virtual false final false
static double_t GetDoubleField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method SetStringField addr 0x2b0b048 size 0x54 virtual false final false
static void SetStringField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, ::StringW val) ;

/// @brief Method SetObjectField addr 0x2b0af38 size 0x54 virtual false final false
static void SetObjectField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, ::cordl_internals::intptr_t val) ;

/// @brief Method SetBooleanField addr 0x2b0b7b8 size 0x54 virtual false final false
static void SetBooleanField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, bool val) ;

/// @brief Method SetByteField addr 0x2b163e8 size 0x54 virtual false final false
static void SetByteField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, uint8_t val) ;

/// @brief Method SetSByteField addr 0x2b0b6a8 size 0x54 virtual false final false
static void SetSByteField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, int8_t val) ;

/// @brief Method SetCharField addr 0x2b0b158 size 0x54 virtual false final false
static void SetCharField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, char16_t val) ;

/// @brief Method SetShortField addr 0x2b0b598 size 0x54 virtual false final false
static void SetShortField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, int16_t val) ;

/// @brief Method SetIntField addr 0x2b0b8c8 size 0x54 virtual false final false
static void SetIntField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, int32_t val) ;

/// @brief Method SetLongField addr 0x2b0b488 size 0x54 virtual false final false
static void SetLongField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, int64_t val) ;

/// @brief Method SetFloatField addr 0x2b0b378 size 0x54 virtual false final false
static void SetFloatField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, float_t val) ;

/// @brief Method SetDoubleField addr 0x2b0b268 size 0x54 virtual false final false
static void SetDoubleField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, double_t val) ;

/// @brief Method CallStaticStringMethod addr 0x2b0837c size 0x54 virtual false final false
static ::StringW CallStaticStringMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticObjectMethod addr 0x2b0a4f8 size 0x54 virtual false final false
static ::cordl_internals::intptr_t CallStaticObjectMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticIntMethod addr 0x2b0ae28 size 0x54 virtual false final false
static int32_t CallStaticIntMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticBooleanMethod addr 0x2b0ad1c size 0x54 virtual false final false
static bool CallStaticBooleanMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticShortMethod addr 0x2b0ab04 size 0x54 virtual false final false
static int16_t CallStaticShortMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticByteMethod addr 0x2b1643c size 0x54 virtual false final false
static uint8_t CallStaticByteMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticSByteMethod addr 0x2b0ac10 size 0x54 virtual false final false
static int8_t CallStaticSByteMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticCharMethod addr 0x2b0a6bc size 0x54 virtual false final false
static char16_t CallStaticCharMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticFloatMethod addr 0x2b0a8ec size 0x54 virtual false final false
static float_t CallStaticFloatMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticDoubleMethod addr 0x2b0a7d4 size 0x54 virtual false final false
static double_t CallStaticDoubleMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticLongMethod addr 0x2b0a9f8 size 0x54 virtual false final false
static int64_t CallStaticLongMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticVoidMethod addr 0x2b0a3ec size 0x54 virtual false final false
static void CallStaticVoidMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method GetStaticStringField addr 0x2b09b74 size 0x44 virtual false final false
static ::StringW GetStaticStringField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticObjectField addr 0x2b09a88 size 0x44 virtual false final false
static ::cordl_internals::intptr_t GetStaticObjectField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticBooleanField addr 0x2b0a200 size 0x44 virtual false final false
static bool GetStaticBooleanField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticByteField addr 0x2b16490 size 0x44 virtual false final false
static uint8_t GetStaticByteField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticSByteField addr 0x2b0a114 size 0x44 virtual false final false
static int8_t GetStaticSByteField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticCharField addr 0x2b09c60 size 0x44 virtual false final false
static char16_t GetStaticCharField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticShortField addr 0x2b0a028 size 0x44 virtual false final false
static int16_t GetStaticShortField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticIntField addr 0x2b0a2ec size 0x44 virtual false final false
static int32_t GetStaticIntField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticLongField addr 0x2b09f3c size 0x44 virtual false final false
static int64_t GetStaticLongField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticFloatField addr 0x2b09e50 size 0x44 virtual false final false
static float_t GetStaticFloatField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticDoubleField addr 0x2b09d58 size 0x44 virtual false final false
static double_t GetStaticDoubleField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method SetStaticStringField addr 0x2b0910c size 0x54 virtual false final false
static void SetStaticStringField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, ::StringW val) ;

/// @brief Method SetStaticObjectField addr 0x2b08ffc size 0x54 virtual false final false
static void SetStaticObjectField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, ::cordl_internals::intptr_t val) ;

/// @brief Method SetStaticBooleanField addr 0x2b0987c size 0x54 virtual false final false
static void SetStaticBooleanField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, bool val) ;

/// @brief Method SetStaticByteField addr 0x2b164d4 size 0x54 virtual false final false
static void SetStaticByteField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, uint8_t val) ;

/// @brief Method SetStaticSByteField addr 0x2b0976c size 0x54 virtual false final false
static void SetStaticSByteField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, int8_t val) ;

/// @brief Method SetStaticCharField addr 0x2b0921c size 0x54 virtual false final false
static void SetStaticCharField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, char16_t val) ;

/// @brief Method SetStaticShortField addr 0x2b0965c size 0x54 virtual false final false
static void SetStaticShortField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, int16_t val) ;

/// @brief Method SetStaticIntField addr 0x2b0998c size 0x54 virtual false final false
static void SetStaticIntField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, int32_t val) ;

/// @brief Method SetStaticLongField addr 0x2b0954c size 0x54 virtual false final false
static void SetStaticLongField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, int64_t val) ;

/// @brief Method SetStaticFloatField addr 0x2b0943c size 0x54 virtual false final false
static void SetStaticFloatField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, float_t val) ;

/// @brief Method SetStaticDoubleField addr 0x2b0932c size 0x54 virtual false final false
static void SetStaticDoubleField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, double_t val) ;

/// @brief Method ToBooleanArray addr 0x2b0dd04 size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToBooleanArray(::ArrayW<bool> array) ;

/// @brief Method ToByteArray addr 0x2b0db4c size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToByteArray(::ArrayW<uint8_t> array) ;

/// @brief Method ToSByteArray addr 0x2b0dc28 size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToSByteArray(::ArrayW<int8_t> array) ;

/// @brief Method ToCharArray addr 0x2b0d700 size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToCharArray(::ArrayW<char16_t> array) ;

/// @brief Method ToShortArray addr 0x2b0da70 size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToShortArray(::ArrayW<int16_t> array) ;

/// @brief Method ToIntArray addr 0x2b0dde0 size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToIntArray(::ArrayW<int32_t> array) ;

/// @brief Method ToLongArray addr 0x2b0d994 size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToLongArray(::ArrayW<int64_t> array) ;

/// @brief Method ToFloatArray addr 0x2b0d8b8 size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToFloatArray(::ArrayW<float_t> array) ;

/// @brief Method ToDoubleArray addr 0x2b0d7dc size 0x3c virtual false final false
static ::cordl_internals::intptr_t ToDoubleArray(::ArrayW<double_t> array) ;

/// @brief Method ToObjectArray addr 0x2b0d61c size 0x44 virtual false final false
static ::cordl_internals::intptr_t ToObjectArray(::ArrayW<::cordl_internals::intptr_t> array, ::cordl_internals::intptr_t arrayClass) ;

/// @brief Method ToObjectArray addr 0x2b16528 size 0x74 virtual false final false
static ::cordl_internals::intptr_t ToObjectArray(::ArrayW<::cordl_internals::intptr_t> array) ;

/// @brief Method FromBooleanArray addr 0x2b0d45c size 0x3c virtual false final false
static ::ArrayW<bool> FromBooleanArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromByteArray addr 0x2b0d2a4 size 0x3c virtual false final false
static ::ArrayW<uint8_t> FromByteArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromSByteArray addr 0x2b0d380 size 0x3c virtual false final false
static ::ArrayW<int8_t> FromSByteArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromCharArray addr 0x2b0ce58 size 0x3c virtual false final false
static ::ArrayW<char16_t> FromCharArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromShortArray addr 0x2b0d1c8 size 0x3c virtual false final false
static ::ArrayW<int16_t> FromShortArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromIntArray addr 0x2b0d538 size 0x3c virtual false final false
static ::ArrayW<int32_t> FromIntArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromLongArray addr 0x2b0d0ec size 0x3c virtual false final false
static ::ArrayW<int64_t> FromLongArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromFloatArray addr 0x2b0d010 size 0x3c virtual false final false
static ::ArrayW<float_t> FromFloatArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromDoubleArray addr 0x2b0cf34 size 0x3c virtual false final false
static ::ArrayW<double_t> FromDoubleArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromObjectArray addr 0x2b1659c size 0x3c virtual false final false
static ::ArrayW<::cordl_internals::intptr_t> FromObjectArray(::cordl_internals::intptr_t array) ;

/// @brief Method GetArrayLength addr 0x2b0dfa8 size 0x3c virtual false final false
static int32_t GetArrayLength(::cordl_internals::intptr_t array) ;

/// @brief Method NewBooleanArray addr 0x2b165d8 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewBooleanArray(int32_t size) ;

/// @brief Method NewByteArray addr 0x2b16614 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewByteArray(int32_t size) ;

/// @brief Method NewSByteArray addr 0x2b16650 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewSByteArray(int32_t size) ;

/// @brief Method NewCharArray addr 0x2b1668c size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewCharArray(int32_t size) ;

/// @brief Method NewShortArray addr 0x2b166c8 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewShortArray(int32_t size) ;

/// @brief Method NewIntArray addr 0x2b16704 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewIntArray(int32_t size) ;

/// @brief Method NewLongArray addr 0x2b16740 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewLongArray(int32_t size) ;

/// @brief Method NewFloatArray addr 0x2b1677c size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewFloatArray(int32_t size) ;

/// @brief Method NewDoubleArray addr 0x2b167b8 size 0x3c virtual false final false
static ::cordl_internals::intptr_t NewDoubleArray(int32_t size) ;

/// @brief Method NewObjectArray addr 0x2b143d0 size 0x54 virtual false final false
static ::cordl_internals::intptr_t NewObjectArray(int32_t size, ::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t obj) ;

/// @brief Method GetBooleanArrayElement addr 0x2b167f4 size 0x44 virtual false final false
static bool GetBooleanArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetByteArrayElement addr 0x2b16838 size 0x44 virtual false final false
static uint8_t GetByteArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetSByteArrayElement addr 0x2b1687c size 0x44 virtual false final false
static int8_t GetSByteArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetCharArrayElement addr 0x2b168c0 size 0x44 virtual false final false
static char16_t GetCharArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetShortArrayElement addr 0x2b16904 size 0x44 virtual false final false
static int16_t GetShortArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetIntArrayElement addr 0x2b16948 size 0x44 virtual false final false
static int32_t GetIntArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetLongArrayElement addr 0x2b1698c size 0x44 virtual false final false
static int64_t GetLongArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetFloatArrayElement addr 0x2b169d0 size 0x44 virtual false final false
static float_t GetFloatArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetDoubleArrayElement addr 0x2b16a14 size 0x44 virtual false final false
static double_t GetDoubleArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetObjectArrayElement addr 0x2b0dec4 size 0x44 virtual false final false
static ::cordl_internals::intptr_t GetObjectArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method SetBooleanArrayElement addr 0x2b16a58 size 0x58 virtual false final false
static void SetBooleanArrayElement(::cordl_internals::intptr_t array, int32_t index, uint8_t val) ;

/// @brief Method SetBooleanArrayElement addr 0x2b16ab0 size 0x54 virtual false final false
static void SetBooleanArrayElement(::cordl_internals::intptr_t array, int32_t index, bool val) ;

/// @brief Method SetByteArrayElement addr 0x2b16b04 size 0x54 virtual false final false
static void SetByteArrayElement(::cordl_internals::intptr_t array, int32_t index, int8_t val) ;

/// @brief Method SetSByteArrayElement addr 0x2b16b58 size 0x54 virtual false final false
static void SetSByteArrayElement(::cordl_internals::intptr_t array, int32_t index, int8_t val) ;

/// @brief Method SetCharArrayElement addr 0x2b16bac size 0x54 virtual false final false
static void SetCharArrayElement(::cordl_internals::intptr_t array, int32_t index, char16_t val) ;

/// @brief Method SetShortArrayElement addr 0x2b16c00 size 0x54 virtual false final false
static void SetShortArrayElement(::cordl_internals::intptr_t array, int32_t index, int16_t val) ;

/// @brief Method SetIntArrayElement addr 0x2b16c54 size 0x54 virtual false final false
static void SetIntArrayElement(::cordl_internals::intptr_t array, int32_t index, int32_t val) ;

/// @brief Method SetLongArrayElement addr 0x2b16ca8 size 0x54 virtual false final false
static void SetLongArrayElement(::cordl_internals::intptr_t array, int32_t index, int64_t val) ;

/// @brief Method SetFloatArrayElement addr 0x2b16cfc size 0x54 virtual false final false
static void SetFloatArrayElement(::cordl_internals::intptr_t array, int32_t index, float_t val) ;

/// @brief Method SetDoubleArrayElement addr 0x2b16d50 size 0x54 virtual false final false
static void SetDoubleArrayElement(::cordl_internals::intptr_t array, int32_t index, double_t val) ;

/// @brief Method SetObjectArrayElement addr 0x2b14424 size 0x54 virtual false final false
static void SetObjectArrayElement(::cordl_internals::intptr_t array, int32_t index, ::cordl_internals::intptr_t obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJNI);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNI, "UnityEngine", "AndroidJNI");
